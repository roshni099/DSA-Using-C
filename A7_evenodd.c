#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create(struct node *head)
{
    struct node *p, *q;
    p=NULL;
    q=NULL;
    int n, i;
    if (head==NULL)
    {
        printf("\nEnter the number of nodes: ");
        scanf("%d", &n);
        for (i=0;i<n;i++)
        {
            if (head==NULL)
            {
                p=(struct node*)malloc(sizeof(struct node));
                printf("\nEnter the value of:\n");
                printf("\n[%d]Element: ", i);
                scanf("%d", &p->data);
                p->next=NULL;
                head=p;
            }
            else
            {
                q=(struct node*)malloc(sizeof(struct node));
                printf("\n[%d]Element: ", i);
                scanf("%d", &q->data);
                q->next=NULL;
                p->next=q;
                p=q;
            }
        }
        printf("\nThe list is created.");
    }
    else
    {
        printf("\nThe list is already created.");
    }
    return head;

}

void display(struct node *head)
{
    struct node *p=head;
    int i=0;

    while(p!=NULL)
    {
        printf("\n[%d]Element: %d", i, p->data);
        p=p->next;
        i++;
    }
}

void evenodd(struct node *head)
{
    struct node *p=head, *head1=NULL, *head2=NULL;
    struct node *odd=NULL;
    struct node *even=NULL;
    struct node *x, *y;
    while(p!=NULL)
    {
        if (p->data%2==0)
        {
            if (even==NULL)
            {
                even=(struct node*)malloc(sizeof(struct node));
                even->data=p->data;
                even->next=NULL;
                even=p;
                head1=even;
            }
            else
            {
                x=(struct node*)malloc(sizeof(struct node));
                x->data=p->data;
                x->next=NULL;
                even->next=x;
                even=x;

            }

        }
        else if (p->data%2==1)
        {
            if (odd==NULL)
            {
                odd=(struct node*)malloc(sizeof(struct node));
                odd->data=p->data;
                odd->next=NULL;
                odd=p;
                head2=odd;
            }
            else
            {
                y=(struct node*)malloc(sizeof(struct node));
                y->data=p->data;
                y->next=NULL;
                odd->next=y;
                odd=y;
            }
        }
        p=p->next;
    }

    struct node *a=head1;
    printf("\nEven Numbers:\n");
    while(a!=NULL)
    {
        printf("%d\t", a->data);
        a=a->next;
    }

    struct node *b=head2;
    printf("\nOdd Numbers: \n");
    while(b!=NULL)
    {
        printf("%d\t", b->data);
        b=b->next;
    }
}

int main()
{
    struct node *head=NULL;
    head=create(head);
    display(head);
    evenodd(head);    
    return 0;
}