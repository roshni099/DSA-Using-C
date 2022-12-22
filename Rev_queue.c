#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *s;
};

void enqueue(struct queue *st, int val)
{
    if (st->rear==st->size-1)
    {
        printf("\nQueue is FULL.\n");
    }
    else
    {
        st->rear++;
        st->s[st->rear]=val;
        printf("\nThe enqueued element is: %d", st->s[st->rear]);
    }
}

void dequeue(struct queue *st)
{
    if (st->front==st->rear)
    {
        printf("\nQueue is EMPTY.\n");
    }
    else
    {
        printf("\nThe dequeued element is: %d", st->s[++st->front]);
    }
}

void display(struct queue *st)
{
    for (int i=st->front+1;i<=st->rear;i++)
    {
        printf("%d\t", st->s[i]);
    }
}

int main()
{
    struct queue st;
    printf("\nEnter the number of elements: ");
    scanf("%d", &st.size);
    int n;
    printf("\nEnter the number of elements you want to fill now: ");
    scanf("%d", &n);
    st.rear=st.front=-1;
    st.s=(int*)malloc(st.size*sizeof(int));

    for (int i=0;i<n;i++)
    {
        int x;
        printf("\nElement[%d]: ", i);
        scanf("%d", &x);
        enqueue(&st, x);
    }

    printf("\nGiven queue:\n");
    display(&st);

    dequeue(&st);
    printf("\nAfter dequeueing:\n");
    display(&st);
    return 0;
}