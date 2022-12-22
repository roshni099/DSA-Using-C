#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
}*front=NULL, *rear=NULL;

void enqueue(int val)
{
    struct node *st;
    st=(struct node*)malloc(sizeof(struct node));

    if (st==NULL)
    {
        printf("\nQueue is FULL.\n");
    }
    else
    {
        st->data=val;
        st->next=NULL;
        if (front==NULL)
        {
            front=rear=st;
        }
        else
        {
            rear->next=st;
            rear=st;
        }
    }
}

void dequeue()
{
    int val;
    struct node *t=front;
    if (front==NULL)
    {
        printf("\nQueue is Empty.\n");
    }
    else
    {
        front=front->next;
        val=t->data;
        free(t);
    }
    printf("\nThe dequeued element is: %d", val);
}

void display()
{
    struct node *p=front;
    while(p!=NULL)
    {
        printf("%d\t", p->data);
        p=p->next;
    }
}

int main()
{
    int i, n, x;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    for (i=0;i<n;i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d", &x);
        enqueue(x);
    }

    printf("\nGIven queue:\n");
    display();

    dequeue();
    printf("\nAfter dequeueing:\n");
    display();
    return 0;
}