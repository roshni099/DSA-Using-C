#include <stdio.h>
#include <stdlib.h>

struct node
{
    char data;
    struct node *next;
} *top = NULL;

void push(char x)
{
    struct node *t = (struct node *)malloc(sizeof(struct node));
    if (t == NULL)
    {
        printf("\nStack overflow.\n");
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

void pop()
{
    struct node *t = top;
    if (top == NULL)
    {
        printf("\nStack Underflow.\n");
    }
    else
    {
        printf("\nThe poped element is: %c", t->data);
        top = top->next;
        free(t);
    }
}

void display()
{
    struct node *t = top;
    while (t != NULL)
    {
        printf("%c\t", t->data);
        t = t->next;
    }
}

int isBalanced(char *exp)
{
    int i, x = -1;
    ;
    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(exp[i]);
        }
        else if (exp[i] == ')')
        {
            if (top == NULL)
            {
                x = 0;
                break;
            }
            pop();
        }
    }
    if (x==-1 && top==NULL)
    {
        printf("\nIt is a balanced parenthesis.\n");
    }
    else
    {
        printf("\nIt is NOT a balanced parenthesis.\n");
    }
}

int main()
{
    char *exp = "((a+b)*(c-d)))";
    char p[100];
    printf("\nEnter the expression you want to check if it's balanced: ");
    scanf(" %s", &p);
    isBalanced(exp);
    isBalanced(p);

    return 0;
}