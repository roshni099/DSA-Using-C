#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL, *last = NULL;

void create()
{
    struct node *p, *q;
    int n;
    if (head == NULL)
    {
        printf("\nEnter the total number of nodes: ");
        scanf("%d", &n);
        printf("\nEnter the value of: \n");
        for (int i = 0; i < n; i++)
        {
            if (head==NULL)
            {
                p=(struct node *)malloc(sizeof(struct node));
                printf("\nElement[%d]: ", i);
                scanf("%d", &p->data);
                p->next=p;
                p->prev=p;
                head=p;                
            }
            else
            {
                q=(struct node *)malloc(sizeof(struct node));
                printf("\nElement[%d]: ", i);
                scanf("%d", &q->data);
                q->next=head;
                p->next=q;
                q->prev=p;
                head->prev=q;
                p=q;
                if (i==n-1)
                {
                    last=p;
                }
            }
        }
    }
    else
    {
        printf("\nWORLD.");
        printf("\nThe list has already been created.\n");
    }
}

void display()
{
    struct node *p=head;
    do 
    {
        printf("%d\t", p->data);
        p=p->next;
    }while(p!=head);
}

void reverse(struct node *head)
{
    struct node *p=head;
    if(p!=last)
    {
        reverse(p->next);
        printf("%d\t", p->data); 
    }
    else
    {
        printf("%d\t", p->data);
    }
}

void insertatbeg()
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the element: ");
    scanf("%d", &p->data);
    p->next=head;
    p->prev=last;
    head->prev=p;
    last->next=p;
    head=p;
}

void insertatend()
{
    struct node *p=(struct node *)malloc(sizeof(struct node ));
    printf("\nEnter the element: ");
    scanf("%d", &p->data);
    last->next=p;
    p->prev=last;
    p->next=head;
    head->prev=p;
    last=p;
}

void insertatindex()
{
    int ind, ele;
    printf("\nEnter the index and the element: ");
    scanf("%d %d", &ind, &ele);
    struct node *p=head;
    int i=0;
    while(i!=ind-1)
    {
        p=p->next;
        i++;
    }    
    struct node *q=(struct node *)malloc(sizeof(struct node));
    q->data=ele;
    q->next=p->next;
    q->prev=p;
    p->next->prev=q;
    p->next=q;
}

void deleteatbeg()
{
    head=head->next;
    head->prev=last;
    last->next=head;
}

void deleteatend()
{
    last=last->prev;
    last->next=head;
    head->prev=last;
}

void deleteatindex()
{
    int ind;
    printf("\nEnter the index: ");
    scanf("%d", &ind);
    int i=0;
    struct node *p=head;
    while(i!=ind-1)
    {
        p=p->next;
        i++;
    }
    p->next->next->prev=p;
    p->next=p->next->next;

}

int main()
{
    printf("\nENTER: \n1.For creation.\n2.For display.\n3.For reverse display.\n4.For insertion at the beginning.\n5.For insertion at the end.\n6.For insertion at index.\n7.For deketion at the beginning.\n8.For deletion at the end.\n9.For deletion at the index.\n10.For Exit.");
    int ch;
    while(1)
    {
        printf("\nPRESS A BUTTON: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
            {
                create();
                display();
                break;
            }
            case 2:
            {
                printf("\nThe given linked list: \n");
                display();
                break;
            }
            case 3:
            {
                printf("\nThe reverse linked list: \n");
                reverse(head);
                break;
            }
            case 4:
            {
                insertatbeg(); 
                printf("\nThe insertion at the beginning: \n");
                display();
                break;
            }
            case 5:
            {
                insertatend();
                printf("\nAfter the insertion at the end: \n");
                display();
                break;
            }
            case 6:
            {
                insertatindex();
                printf("\nAfter the unsertion at the given index: \n");
                display();
                break;
            }
            case 7:
            {
                deleteatbeg();
                printf("\nAfter deletion at the beginning: \n");
                display();
                break;
            }
            case 8:
            {
                deleteatend();
                printf("\nAfter deletion at the end: \n");
                display();
                break;
            }
            case 9:
            {
                deleteatindex();
                printf("\nAfter the deletion of the given index: \n");
                display();
                break;
            }
            case 10:
            {
                printf("\nEXITING...");
                goto news;
                break;
            }
            default:
            {
                printf("\nINVALID NUMBER.\n\n");
            }
        }
    }   
    news:
    printf("\nEXITED.");
    return 0; 
}