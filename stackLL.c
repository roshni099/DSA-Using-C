#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
};

struct stack *top = NULL;
static int i =-1;

void push()
{
    int ele;
    struct stack *t = (struct stack *)malloc(sizeof(struct stack));
    if (t == NULL)
    {
        printf("\nStack overflow.\n");
    }
    else
    {
        i++;
        printf("\nElement[%d]: ", i);
        scanf("%d", &ele);
        t->data = ele;
        t->next = top;
        top=t;
    }
}

void pop()
{
    if (top==NULL)
    {
        printf("\nStack Underflow.\n");
    }
    else
    {
        i--;
        struct stack *t=top;
        printf("\nThe popped element is: %d", t->data);
        top=top->next;
        free(t);
    }
}

void display()
{
    struct stack *t=top;
    while(t!=NULL)
    {
        printf("%d\t", t->data);
        t=t->next;
    }
}

void isFull()
{
    struct stack *t=(struct stack*)malloc(sizeof(struct stack));
    if (t==NULL)
    {
        printf("\nThe stack is full.\n");
    }
    else
    {
        printf("\nThe stack is not full.\n");
    }
}

void isEmpty()
{
    if(top==NULL)
    {
        printf("\nThe stack is empty.\n");
    }
    else
    {
        printf("\nThe stack is not empty.\n");
    }
}

void peek()
{
    if (top!=NULL)
    {
        printf("\nThe topmost element is : %d", top->data);
    }
    else
    {
        printf("\nStack underflow.\n");
    }
}
int main()
{
    printf("\nENTER: \n1.For pushing elements.\n2.For popping elements.\n3.For display.\n4.For determining if it's Full.\n5.For determining if it's Empty.\n");
    while(1)
    {
        int ch;
        printf("\n\nPRESS A BUTTON: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
            {
                int n;
                printf("\nEnter the number of elements you want to fill: ");
                scanf("%d", &n);
                for (int j=0;j<n;j++)
                {
                    push();
                }
                display();
                break;
            }
            case 2:
            {
                int n;
                printf("\nEnter the number of elements you want to pop: ");
                scanf("%d", &n);
                for (int j=0;j<n;j++)
                {
                    pop();
                }
                printf("\n");
                display();
                break;
            }
            case 3:
            {
                printf("\nThe given stack: \n");
                display();
                break;
            }
            case 4:
            {
                isFull();
                break;
            }
            case 5:
            {
                isEmpty();
                break;
            }
            case 6:
            {
                peek();
                break;
            }
            case 7:
            {
                printf("\n\nEXITING...");
                goto news;
                break;
            }
            default:
            {
                printf("\nINVALID NUMBER.");
            }
        }
    }
    news:
    printf("\nEXITED.");
    return 0;
}