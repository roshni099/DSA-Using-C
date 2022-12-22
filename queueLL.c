#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front=NULL;
struct node *rear=NULL;

void traversal(struct node *st)
{
    printf("\nElements of the given queue:\n");
    while (st!=NULL)
    {
        printf("%d\t", st->data);
        st=st->next;
    }
}

void enqueue( int val)
{
    struct node *st;
    st=(struct node*)malloc(sizeof(struct node));
    if (st==NULL)
    {
        printf("\nThe queue is full.\n");
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
    int val=-1;
    struct node *ptr=front;
    if (front==NULL)
    {
        printf("\nThe queue is Empty.\n");
    }
    else
    {
        val=front->data;
        front=front->next;
        free(ptr);
        printf("\nThe dequeued element is: %d", val);
    }
}


int main()
{
    int n, x;
    printf("\nEnter the number of elemnts you want to add: ");
    scanf("%d", &n);

    for (int i=0;i<n;i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d", &x);
        enqueue(x);
    }

    printf("\nThe given queue is:\n");
    traversal(front);

    dequeue();
    printf("\nAfter dequeuing :\n");
    traversal(front);
    
    
    return 0;
}