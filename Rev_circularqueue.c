#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct queue
{
    int size;
    int front ;
    int rear;
    int *s;
};

void enqueue(struct queue *st, int val)
{
    if ((st->rear+1)%st->size==st->front)
    {
        printf("\nQueue is full.\n");
    }
    else
    {
        st->rear=(st->rear+1)%st->size;
        st->s[st->rear]=val;
        printf("\nThe enqueued element is: %d", val);
    }
}

void dequeue(struct queue *st)
{
    if (st->rear==st->front)
    {
        printf("\nThe Queue is empty.\n");
    }
    else
    {
        st->front=(st->front+1)%st->size;
        printf("\nThe dequeued element is: %d", st->s[st->front]);
    }
}

void display(struct queue *st)
{
    int i=st->front+1;
    do
    {
        printf("%d\t", st->s[i]);
        i=(i+1)%st->size;
    }while(i!=(st->rear+1)%st->size);
}

int main()
{
    struct queue st;
    st.front=st.rear=-1;
    int i, n, x;
    printf("\nEnter the number of elements: ");
    scanf("%d", &st.size);
    st.s=(int *)malloc(st.size*sizeof(int));
    printf("\nEnter the number of elements you want to fill now: ");
    scanf("%d", &n);

    for (i=0;i<n;i++)
    {
        printf("\nElement[%d[: ", i);
        scanf("%d", &x);
        enqueue(&st,x);
    }

    printf("\nGiven queue:\n");
    display(&st);

    dequeue(&st);
    printf("\nAfter dequeueing:\n");
    display(&st);
    return 0;
}