#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *top = NULL;

void push(int val)
{
    struct node *t = NULL;
    t = (struct node *)malloc(sizeof(struct node));

    if (t == NULL)
    {
        printf("\nStack overflow.\n");
    }
    else
    {
        printf("\nThe pushed element is: %d", val);
        t->data = val;
        t->next = top;
        top = t;
    }
}

void pop()
{
    struct node *t;
    if (top == NULL)
    {
        printf("\nStack Underflow.\n");
    }
    else
    {
        t = top;
        printf("\nThe popped element is: %d", t->data);
        top = top->next;
        free(t);
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

void peek(int ind)
{
    int i = 0;

    struct node *t = top;

    do
    {
        t = t->next;
        i++;
    } while (i != ind || t != NULL);

    printf("\nThe element you want to peek is : %d", t->data);
}

int main()
{
    int x, i, n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d", &x);
        push(x);
    }

    printf("\nGiven stack:\n");

    display();

    pop();

    printf("\nAfter popping:\n");
    display();
    printf("\nEnter the index to peek: ");
    int a;
    scanf("%d", &a);
    peek(a);

    return 0;
}