#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *s;
};

int isEmpty(struct queue *st)
{
    if (st->front==st->rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct queue *st)
{
    if ((st->rear+1)%st->size==st->front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct queue *st,int val)
{
    if (isFull(st))
    {
        printf("\nThe queue is FULL.\n");
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
    if (isEmpty(st))
    {
        printf("\nThe queue is Empty.\n");
    }
    else
    {
        st->front=(st->front+1)%st->size;
        printf("\nThe dequeued element is : %d", st->s[st->front]);
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
    struct queue *st;
    st->front=st->rear=-1;
    int n, i, x;
    printf("\nEnter the size of the queue: ");
    scanf("%d", &st->size);
    st->s=(int*)malloc(st->size*sizeof(int));
    printf("\nEnter the number of elements you want to fill now: ");
    scanf("%d", &n);

    for (i=0;i<n;i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d", &x);
        enqueue(st, x);
    }

    printf("\nThe given queue: \n");
    display(st);

    dequeue(st);
    printf("\n");
    display(st);   

    for (i=0;i<n;i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d", &x);
        enqueue(st, x);
    }

    printf("\nThe given queue: \n");
    display(st);
    return 0;
}