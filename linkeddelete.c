#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct node *next;
};

struct Node *traversal(struct Node *head)
{
    int i=0;
    while(head!=NULL)
    {
        printf("\n[%d]Element = %d", i, head->data);
        head=head->next;
        i++;
    }
}

struct Node *deleteatbeg(struct Node *head)
{
    struct Node *p=head;
    head=head->next;
    free(p);
    return head;
}

struct Node *deleteatend(struct Node *head)
{
    struct Node *p=head;
    struct Node *q=head->next;
    while (q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

struct Node *deleteatindex(struct Node *head, int index)
{
    struct Node *p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    struct Node *q=p->next;
    p->next=q->next;
    free(q);
    return head;

}

int main()
{
    struct Node *head, *second, *third, *fourth, *fifth, *sixth, *seventh;
    int in;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth= (struct Node *)malloc(sizeof(struct Node));
    sixth= (struct Node *)malloc(sizeof(struct Node));
    seventh= (struct Node *)malloc(sizeof(struct Node));

    printf("\nEnter the 1st element: ");
    scanf("%d", &head->data);
    head->next = second;

    printf("\nEnter the 2nd element: ");
    scanf("%d", &second->data);
    second->next = third;

    printf("\nEnter the 3rd element: ");
    scanf("%d", &third->data);
    third->next = fourth;

    printf("\nEnter the 4th element: ");
    scanf("%d", &fourth->data);
    fourth->next = fifth;

    printf("\nEnter the 5th element: ");
    scanf("%d", &fifth->data);
    fifth->next = sixth;

    printf("\nEnter the 6th element: ");
    scanf("%d", &sixth->data);
    sixth->next = seventh;

    printf("\nEnter the 7th element: ");
    scanf("%d", &seventh->data);
    seventh->next = NULL;

    traversal(head);

    head=deleteatbeg(head);
    printf("\nAfter deleting the first node:\n");
    traversal(head);

    head=deleteatend(head);
    printf("\nAfter deleting at the end:\n");
    traversal(head);

    printf("\nEnter the indext you want to delete: ");
    scanf("%d", &in);
    head=deleteatindex(head, in);
    printf("\nAfter deleting the index %d:\n", in);
    traversal(head);

    return 0;
}