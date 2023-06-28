#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int top;
    int size;
    int *s;
};

void create(struct stack *st)
{
    st->top=-1;
    st->s=(int*)malloc(st->size*sizeof(int));
}

void push(struct stack *st)
{
    if (st->top==st->size-1)
    {
        printf("\nThe stack is full.\n");
    }
    else
    {
        st->top++;
        printf("\nElement[%d]: ", st->top);
        scanf("%d", &st->s[st->top]);
    }
}

void pop(struct stack *st)
{
    if(st->top==-1)
    {
        printf("\nThe stack is empty.\n");
    }
    else
    {
        int val=st->s[st->top];
        st->top--;
        printf("\nThe popped element is %d.", val);
    }
}

void display(struct stack *st)
{
    for (int i=0;i<=st->top;i++)
    {
        printf("%d\t", st->s[i]);
    }
}

void peek(struct stack *st)
{
    if(!isEmpty(st))
    {
        printf("\nThe topmost element of the stack is : %d", st->s[st->top]);
    }
    else
    {
        printf("\nThe stack is empty.");
    }
}

int isFull(struct stack *st)
{
    if (st->top==st->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct stack *st)
{
    if(st->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    struct stack st;
    int n;

    create(&st);
    printf("\nEnter the number of element: ");
    scanf("%d", &st.size);
    int ch;
    printf("\nENTER: \n1.For pushing elements.\n2.For poping elements.\n3.for Display of the elements.\n4.For peek.\n5.For determining if it's full.\n6.For determining if it's empty.\n10.for Exit.");
    while(1)
    {
        printf("\nPRESS A BUTTON: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
            {
                printf("\nEnter the number of elements you want to fill : ");
                scanf("%d", &n);
                for (int i=0;i<n;i++)
                {
                    push(&st);
                }
                break;
            }
            case 2:
            {
                printf("\nEnter the number of elements you want to pop: ");
                scanf("%d", &n);
                for (int i=0;i<n;i++)
                {
                    pop(&st);
                }
                break;
            }
            case 3:
            {
                printf("\nThe given elemets: \n");
                display(&st);
                break;
            }
            case 4:
            {
                peek(&st);
                break;
            }
            case 5:
            {
                printf("\n\nDETERMINING...\n");
                if(!isFull(&st))
                {
                    printf("\nThe stack is not full.\n");
                }
                else
                {
                    printf("\nThe stack is full.\n");
                }
                break;
            }
            case 6:
            {
                printf("\n\nDETERMINING...\n");
                if(!isEmpty(&st))
                {
                    printf("\nThe stack is not empty.\n");
                }
                else
                {
                    printf("\nThe stack is empty.\n");
                }
                break;
            }
            case 10:
            {
                printf("\nEXITING...");
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
    printf("\n\nEXITED.");
    return 0;
}