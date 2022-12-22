#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *s;
};


struct queue
{
    int size;
    int front;
    int rear;
    int *m;
};


void create(struct stack *st)
{
    st->s = (int *)malloc(st->size * sizeof(int));
    st->top = -1;
}

void stackpush(struct stack *st, int val)
{
    if (st->top == st->size - 1)
    {
        printf("\nStack Overflow.\n");
    }
    else
    {
        st->top++;
        st->s[st->top] = val;
    }
}

int stackpop(struct stack *st)
{
    if (st->top == -1)
    {
        printf("\nStack Underflow.\n");
    }
    else
    {
        int val = st->s[st->top];
        st->top--;
        return val;
    }
}

void queuecreate(struct queue *t)
{
    t->front = t->rear = -1;
    t->m = (int *)malloc(t->size * sizeof(int));
}

void enqueue(struct queue *t,int val)
{
    if (t->rear == t->size - 1)
    {
        printf("\nQueue is FULL.\n");
    }
    else
    {
        t->rear++;
        t->m[t->rear] = val;
    }
}

int dequeue(struct queue *t)
{
    if (t->front == t->rear)
    {
        printf("\nQueue is Empty.\n");
    }
    else
    {
        int val;
        val = t->m[t->front];
        t->front++;
        return val;
    }
}

void reverse(struct stack *st, struct queue *t)
{
    while (t->front != t->rear)
    {
        t->front++;
        stackpush(st, t->m[t->front]);
        dequeue(t);
    }
    while (st->top == -1)
    {
        enqueue(t,st->s[st->top]);
        st->top--;
        stackpop(st);
    }
}

void display(struct queue *t)
{
    for (int i = t->front + 1; i <= t->rear; i++)
    {
        printf("%d\t", t->m[i]);
    }
}

int main()
{
    struct stack st;
    struct queue t;
    int i, n, x;
    int a;
     printf("\nEnter the total number of elements: ");
    scanf("%d", &a);
    st.size=t.size=a;
    create(&st);
    queuecreate(&t);
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d", &x);
        enqueue(&t,x);
    }

    display(&t);

    reverse(&st, &t);

    display(&t);
    return 0;
}
