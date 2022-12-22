#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*first;

void display(struct node *temp)
{
    if (temp!=NULL)
    {
        display(temp->next);
        printf("%d\t", temp->data);
    }
}

void create(int a[], int n)
{
    struct node  *t, *p;
    int i;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=a[0];
    first->next=NULL;
    p=first;
    for (i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        p->next=t;
        p=t;
    }
}
int main()
{
    int A[]={1,2,3,4,5};

    create(A,5);
    display(first);
    
    return 0;
}