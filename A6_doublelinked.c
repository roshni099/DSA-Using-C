#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
    struct node *head;
};

struct node *create(struct node *head)
{
    struct node *p, *q;
    p=NULL;
    q=NULL;
    int n, i;
    if (head==NULL)
    {
        printf("\nEnter the total number of nodes: ");
        scanf("%d", &n);
        for(i=0;i<n;i++)
        {
            if (head==NULL)
            {
                p=(struct node*)malloc(sizeof(struct node));



                printf("%p", p);
                printf("\nEnter the value of : \n");
                printf("\n[%d]Element: ", i);
                scanf("%d", &p->data);
                p->prev=NULL;
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
                q->prev=p;
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

void traversal(struct node *head)
{
    struct node *p=head;
    int i=0;
    printf("\nGiven linked list.\n");
    while(p!=NULL)
    {
        printf("\n[%d]Element: %d", i, p->data);
        p=p->next;
        i++;
    }
}


int main()
{
    struct node *head=NULL;

    head=create(head);
    traversal(head);
    
    return 0;
}