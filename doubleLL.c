#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *create(struct node *head)
{
    int n;
    struct node *p, *q;
    if(head==NULL)
    {
        printf("\nEnter the number of elements: ");
        scanf("%d", &n);
        for ( int i=0;i<n;i++)
        {
            if(head==NULL)
            {
                p=(struct node *)malloc(sizeof(struct node));
                printf("\nElement[%d]: ", i);
                scanf("%d", &p->data);
                p->next=NULL;
                p->prev=NULL;
                head=p;
            }
            else
            {
                q=(struct node *)malloc(sizeof(struct node));
                printf("\nElement[%d]: ", i);
                scanf("%d", &q->data);
                q->next=NULL;
                q->prev=p;
                p->next=q;
                p=q;
            }
        }
    }
    else
    {
        printf("\nThe list has already been created.\n");
    }
    return head;
}

void display(struct node *head)
{
    struct node *p=head;
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
struct node *insertatbeg(struct node *head)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the element: ");
    scanf("%d", &p->data);
    p->next=head;
    p->prev=NULL;
    head->prev=p;
    head=p;
    return head;
}

struct node *insertatend(struct node *head)
{
    struct node *p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    struct node *q=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the element: ");
    scanf("%d", &q->data);
    q->next=NULL;
    q->prev=p;
    p->next=q;
    return head;
}

struct node *insertatind(struct node *head)
{
    int ind, ele, i=0;
    struct node *p=head;
    printf("\nEnter the index and the element: ");
    scanf("%d %d", &ind, &ele);
    while(i!=ind-1)
    {
        p=p->next;
        i++;
    }
    struct node *q=(struct node *)malloc(sizeof(struct node));
    q->data=ele;
    q->prev=p;
    q->next=p->next->next;
    p->next->next->prev=q;
    p->next=q;
    return head;
}

struct node *deleteatbeg(struct node *head)
{
    head=head->next;
    head->prev=NULL;
    return head;
}

struct node *deleteatend(struct node *head)
{
    struct node *p=head;
    while(p->next->next!=NULL)
    {
        p=p->next;
    }
    p->next=NULL;
    return head;
}

struct node *deleteatind(struct node *head)
{
    int ind, i=0;
    printf("\nEnter the index you want to delete: ");
    scanf("%d", &ind);
    while(i!=ind-1)
    {
        p=p->next;
    }
    p->next->next->prev=p;
    p->next=p->next->next;
    return head;
}
int main()
{
    struct node *head=NULL;
    printf("\nENTER: \n1.For creation.\n2.For display.\n3.For reverse display.\n.4.For insertion at the beginning.\n5.For insertion at the end.\n6.For insertion at index.\n7.For deletion at beginning.\n8.For deletion at the end.\n9.For deletion at given index.\n10.For Exit.");
    int ch;
    while(1)
    {
        printf("\nPRESS A BUTTON: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
            {
                head=create(head);
                printf("\nAfter creation: \n");
                display(head);
                break;
            }
            case 2:
            {
                printf("\nThe given double linked list: \n");
                display(head);
                break;
            }
            case 3:
            {
                printf("\nThe reversed given double linked list: \n");
                reverse(head);
                break;
            }
            case 4:
            {
                head=insertatbeg(head);
                printf("\nAfter insertion at the beginning: \n");
                display(head);
                break;
            }
            case 5:
            {
                head=insertatend(head);
                printf("\nAfter insertion at the end: \n");
                display(head);
                break;
            }
            case 6:
            {
                head=insertatind(head);
                printf("\nAfter insertion at given index: \n");
                display(head);
                break;
            }
            case 7:
            {
                head=deleteatbeg(head);
                printf("\nAfter deletion at the beginning: \n");
                display(head);
                break;
            }
            case 8:
            {
                head=deleteatend(head);
                printf("\nAfter deletion at the end: \n");
                display(head);
                break;
            }
            case 9:
            {
                head=deleteatind(head);
                printf("\nAfter deletion at the given index: \n");
                display(head);
                break;
            }
            case 10:
            {
                printf("EXITING...");
                goto news;
                break;
            }
            default:
            {
                printf("\nINVALID NUMBER.");
            }
        }
    }
    news:
    printf("\nEXITED.");
    return 0;
}