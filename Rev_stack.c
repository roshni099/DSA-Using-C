#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *s;
};

void creat(struct stack *st)
{
    st->top = -1;
    st->s = (int *)malloc(st->size * sizeof(int));
}

void push(struct stack *st, int val)
{
    if (st->top == st->size - 1)
    {
        printf("\nStack overflow.\n");
    }
    else
    {
        printf("\nThe pushed element is: %d", val);
        st->top++;
        st->s[st->top] = val;
    }
}

void pop(struct stack *st)
{
    if (st->top == -1)
    {
        printf("\nStack Undeflow.\n");
    }
    else
    {
        int val = st->s[st->top];
        st->top--;
        printf("\nThe popped element is: %d", val);
    }
}

void peek(struct stack *st, int ind)
{
    if (st->top - ind + 1 < 0)
    {
        printf("\nINVALID INDEX.\n");
    }
    else
    {
        printf("\nThe lement you want to peek is: %d", st->s[st->top - ind + 1]);
    }
}

void sort(struct stack *st)
{
    for (int i = 0; i < st->top; i++)
    {
        for (int j = 0; j < st->top - 1; j++)
        {
            if (st->s[j] > st->s[j + 1])
            {
                int temp;
                temp = st->s[j];
                st->s[j] = st->s[j + 1];
                st->s[j + 1] = temp;
            }
        }
    }
    printf("\nAfter sorting: \n");

    for (int i = st->top; i >= 0; i--)
    {
        printf("%d\t", st->s[i]);
    }

}

void display(struct stack *st)
{
    for (int i = st->top; i >= 0; i--)
    {
        printf("%d\t", st->s[i]);
    }
}

int main()
{
    struct stack st;
    int n;

    creat(&st);
    printf("\nEnter the number of element: ");
    scanf("%d", &st.size);

    printf("\nEnter the number of elements you want to fill now: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int x;
        printf("\nElement[%d]: ", i);
        scanf("%d", &x);
        push(&st, x);
    }
    printf("\nGiven stack: \n");
    display(&st);
    pop(&st);
    printf("\nAfter popping:\n");
    display(&st);

    sort(&st);
    return 0;
}