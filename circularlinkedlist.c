#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create(struct node *head)
{
    struct node *p=NULL, *q=NULL;
    int n, i;

    if(head==NULL)
    {
        printf("\nEnter the total number of elements: ");
        scanf("%d", &n);
        for (i=0;i<n;i++)
        {
            if (head==NULL)
            {
                p=(struct node *)malloc(sizeof(struct node *));
                printf("\nEnter the value of :\n");
                printf("\n[%d]Element: ", i);
                scanf("%d", &p->data);
                p->next=p;
                head=p;
            }
            else
            {
                q=(struct node *)malloc(sizeof(struct node *));
                printf("\n[%d]Element: ", i);
                scanf("%d", &q->data);
                p->next=q;
                q->next=head;
                p=q;
            }
        }
        printf("\nThe circular linked list is created.\n");
    }
    else
    {
        printf("\nThe circular linked list is already created.\n");
    }
    return head;
}

void display(struct node *head)
{
    struct node *p=head;
    int i=0;
    do
    {
        printf("\n[%d]Element: %d", i, p->data);
        p=p->next;
        i++;
    }while(p!=head);
}

struct node *insertatfirst(struct node *head)
{
    struct node *p, *q=head;
    int n;
    printf("\nEnter the element you want to insert at the beginning: ");
    scanf("%d", &n);
    p=(struct node *)malloc(sizeof(struct node));
    p->data=n;
    p->next=head;
    do
    {
        q=q->next;
        if (q->next==p->next)
        {
            q->next=p;
        }
    }while(q->next!=p);
    return p;

}

struct node *insertatend(struct node *head)
{
    struct node *p=head;
    struct node *t;
    t=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the element you want to insert at the end: ");
    scanf("%d", &t->data);
    while(p->next!=head)
    {
        p=p->next;
    }
    p->next=t;
    t->next=head;
    return head;
}

struct node *insertatindex(struct node *head)
{
    struct node *p=head, *t;
    t=(struct node*)malloc(sizeof(struct node));
    int index, i;
    printf("\nEnter the element and the index at which you want toinsert the element: ");
    scanf("%d %d", &t->data, &index);

    for(i=0;i<index-1;i++)
    {
        p=p->next;
    }
    t->next=p->next;
    p->next=t;
    return head;
}

int main()
{
    struct node *head=NULL;
    head=create(head);

    printf("\nThe given circular linked list is:\n");
    display(head);

    head=insertatfirst(head);
    printf("\nAfter adding in the beginning:\n");
    display(head);

    head=insertatend(head);
    printf("\nAfter adding in the end:\n");
    display(head);

    head=insertatindex(head);
    printf("\nAfter adding at the given index:\n");
    display(head);

    
    return 0;
}