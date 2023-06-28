#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create(struct node *head)
{
    struct node *p, *q;
    int n;
    if (head == NULL)
    {
        printf("\nEnter the number of nodes you want to enter: ");
        scanf("%d", &n);
        printf("\nEnter the value of: \n");
        for (int i = 0; i < n; i++)
        {
            if (head == NULL)
            {
                p = (struct node *)malloc(sizeof(struct node));
                printf("\nElement[%d]: ", i);
                scanf("%d", &p->data);
                p->next = NULL;
                head = p;
            }
            else
            {
                q = (struct node *)malloc(sizeof(struct node));
                printf("\nElement[%d]: ", i);
                scanf("%d", &q->data);
                q->next = NULL;
                p->next = q;
                p = q;
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
    struct node *p = head;
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
}

struct node *insertatbeg(struct node *head)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the element you want to insert at the beginning: ");
    scanf("%d", &p->data);
    p->next = head;
    head = p;
    return head;
}

struct node *insertatend(struct node *head)
{
    struct node *p=head, *q;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    q=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the element you want to insert at the end: ");
    scanf("%d", &q->data);
    p->next=q;
    q->next=NULL;
    return head;
}

struct node *insertatind(struct node *head)
{
    int ind, ele, i=0;
    printf("\nEnter the index and the element: ");
    scanf("%d %d", &ind, &ele);
    struct node *p=head, *q;
    while(i!=ind-1)
    {
        p=p->next;
        i++;
    }
    q=(struct node*)malloc(sizeof(struct node));
    q->data=ele;
    q->next=p->next;
    p->next=q;
    return head;
}

struct node *deleteatbeg(struct node *head)
{
    head=head->next;
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

struct node *deleteatindex(struct node *head)
{
    int ind, i=0;
    printf("\nEnter the index you want to delete: ");
    scanf("%d", &ind);
    struct node *p=head;   
    while(i!=ind-1)
    {
        p=p->next;
        i++;
    }
    p->next=p->next->next;
    return head;
}

void reverse(struct node *head)
{
    struct node *p=head;
    if(p!=NULL)
    {
        reverse(p->next);
        printf("%d\t", p->data);
    }
}

int main()
{
    struct node *head = NULL;
    int ch;
    printf("Enter:\n1.For creation.\n2.For display.\n3.For insertion at the beginning.\n4.For insertion at the end.\n5.For insertion at index.\n6.For deletion at beg.\n7.For deletion at end.\n8.For deletion at index.\n9.For reverse display.\n10.For EXIT.");
    while (1)
    {
        printf("\nPRESS A BUTTON: ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            {
                head = create(head);
                display(head);
                break;
            }
            case 2:
            {
                printf("\nThe given linked list: \n");
                display(head);
                break;
            }
            case 3:
            {
                head=insertatbeg(head);
                printf("\nAfter insertiion at the beginning: \n");
                display(head);
                break;
            }
            case 4:
            {
                head=insertatend(head);
                printf("\nAfter insertion at the end: \n");
                display(head);
                break;
            }
            case 5:
            {
                head=insertatind(head);
                printf("\nAfter insertion at the index: \n");
                display(head);
                break;
            }
            case 6:
            {
                head=deleteatbeg(head);
                printf("\nAfter deletion at beginning: \n");
                display(head);
                break;
            }
            case 7:
            {
                head=deleteatend(head);
                printf("\nAfter deletion at the end: \n");
                display(head);
                break;
            }
            case 8:
            {
                head=deleteatindex(head);
                printf("\nAfter deletion at the given index : \n");
                display(head);
                break;
            }
            case 9:
            {
                printf("\nThe reverse display of the given linked list: \n");
                reverse(head);
                break;
            }
            case 10:
            {
                printf("\nEXITED.");
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
    return 0;
}