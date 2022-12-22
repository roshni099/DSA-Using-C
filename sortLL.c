#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create(struct node *head, int n)
{
    struct node *p, *q;
    int i=0;
    if (head==NULL)
    {
    for (i=0;i<n;i++)
    {
        if (head==NULL)
        {
            p=(struct node*)malloc(sizeof(struct node));
            printf("\nEnter the value of :\n");
            printf("\nElement[%d]: ", i);
            scanf("%d", &p->data);
            p->next=NULL;
            head=p;
        }
        else
        {
            q=(struct node*)malloc(sizeof(struct node));
            printf("\nElement[%d]: ", i);
            scanf("%d", &q->data);
            p->next=q;
            q->next=NULL;
            p=q;
        }
    }
    printf("\nThe list is created.\n");
    }
    else
    {
        printf("\nThe list id already created.\n");
    }
    return head;
}

void traversal(struct node *head)
{
    struct node *p=head;
    printf("\nGuven linked list:\n");
    while(p!=NULL)
    {
        printf("%d\t", p->data);
        p=p->next;
    }
}

void reverse(struct node *head)
{
   struct node *p=head;
   if (p!=NULL)
   {
    reverse(p->next);
    printf("%d\t", p->data);
   }
}

int main()
{
    struct node *head=NULL;
    int n;
    printf("\nEnter the number of nodes you want to create: ");
    scanf("%d", &n);
    head=create(head, n);
    traversal(head);
    printf("\nThe reverse linked list is:\n");
    reverse(head);
    return 0;
}