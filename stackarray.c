#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *s;
};

void create(struct stack *st)
{
    st->top = -1;
    st->s = (int *)malloc(st->size * sizeof(int));
}

void display(struct stack st)
{
    for (int i = st.top; i >= 0; i--)
    {
        printf("%d\t", st.s[i]);
    }
}

void push(struct stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        printf("\nSTack overflow.\n");
    }
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
}

void pop(struct stack *st)
{
    int x = -1;
    if (st->top == -1)
    {
        printf("\nStack underflow.\n");
    }
    else
    {
        x = st->s[st->top--];
    }
    printf("\nThe poped element is: %d\n", x);
}

void peek(struct stack st, int index)
{
    int x = -1;
    if (st.top - index + 1 < 0)
    {
        printf("\nINVALID INDEX\n");
    }
    else
    {
        x = st.s[st.top - index + 1];
    }
    printf("\nThe element you want to peek is: %d", x);
}

void isFull(struct stack st)
{
    if (st.top == st.size - 1)
    {
        printf("\nThe stack is FULL.\n");
    }
    else
    {
        printf("\nThe stack is NOT FULL.\n");
    }
}

void isEmpty(struct stack st)
{
    if (st.top == -1)
    {
        printf("\nThe stack is EMPTY.\n");
    }
    else
    {
        printf("\nThe stack is NOT EMPTY.\n");
    }
}
int main()
{
    struct stack st;
    int n, y, i;
    printf("\nEnter the number of elements: ");
    scanf("%d", &st.size);
    printf("\nEnter the number of elements you want to fill now: ");
    scanf("%d", &n);
    create(&st);
    printf("\nEnter the value of element:\n");
    for (i = 0; i < n; i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d", &y);
        push(&st, y);
    }
    printf("\nGiven stack:\n");
    display(st);
    int x = 0, a, b;
    printf("\nEnter 0 you want to push an element.\nEnter 1 if you want to pop.\nEnter 2 if you want to peek.\nEnter 3 if you want to check if it's empty.\nEnter 4 if you want to check if it's full.\nEnter 5 If you want to display.\nEnter 6 to EXIT.\n: ");
    scanf("%d", &x);
    if (x == 0)
    {
        printf("\nEnter element you want to push: ");
        scanf("%d", &a);
        push(&st, a);
        display(st);
    }
    else if (x == 1)
    {
        pop(&st);
        display(st);
    }
    else if (x == 2)
    {
        printf("\nEnter the index of element you want to peek: ");
        scanf("%d", &b);
        peek(st, b);
    }
    else if (x == 3)
    {
        isEmpty(st);
    }
    else if (x == 4)
    {
        isFull(st);
    }
    else if (x == 5)
    {
        printf("\nDisplaying the stack.\n");
        display(st);
    }
    else if (x == 6)
    {
        printf("\nEXITED.\n");
    }
    else
    {
        printf("\nINVALID NUMBER.\n");
    }
    return 0;
}