#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *top = NULL;

void push(int x)
{
    struct node *t = (struct node *)malloc(sizeof(struct node));
    if (t == NULL)
    {
        printf("\nStack overflow\n");
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
    struct node *t;
    if (top == NULL)
    {
        printf("\nThe stack is EMPTY.\n");
    }
    else
    {
        t = top;
        printf("\nThe poped element is : %d", t->data);
        top = top->next;
        free(t);
    }
}

void peek()
{
    struct node *t = top;
    int ind, i=0, x=-1;
    printf("\nEnter the index you want to peek:  ");
    scanf("%d", &ind);
    while (i != ind || t!=NULL)
    {
        x=t->data;
        t=t->next;
        i++;
    }
    if(x==-1)
    {
        printf("INVALID INDEX\n");
    }
    else
    {
        printf("\nThe element you wanted to peek is %d", x);
    }
}

void display()
{
    struct node *t = top;
    while (t != NULL)
    {
        printf("%d\t", t->data);
        t = t->next;
    }
}

void isEmpty()
{
    if (top == NULL)
    {
        printf("\nThe stack is empty.\n");
    }
    else
    {
        printf("\nThe stack is NOT EMPTY.\n");
    }
}

void isFULL()
{
    struct node *t = (struct node *)malloc(sizeof(struct node));
    if (t == NULL)
    {
        printf("\nThe tscak is FULL.\n");
    }
    else
    {
        printf("\nThe stack is NOT FULL.\n");
    }
}

int main()
{
    int n, x;
    printf("\nEnter the number of elements you want to stack: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d", &x);
        push(x);
    }
    printf("\nGiven stack:\n");
    display();

    pop();
    printf("\nAfter popping the stack :\n");
    display();
    isEmpty();
    isFULL();
    peek();

    return 0;
}