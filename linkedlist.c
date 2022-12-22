#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertatfirst(struct Node *head, int data)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

struct Node *insertatindex(struct Node *head, int data, int index)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    ptr->data = data;
    return head;
}

struct Node *insertatend(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    ptr->data = data;
    return head;
}

struct Node *insertafternode(struct Node *head, struct Node *prevnode, int data)
{
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=prevnode->next;
    prevnode->next=ptr;
    ptr->data=data;
    return head;
}

int main()
{
    struct Node *head, *second, *third, *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

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
    fourth->next = NULL;

    printf("\nElements at the beginning: \n");
    traversal(head);

    int x;
    printf("\nEnter the element you want to insert at the beginning : ");
    scanf("%d", &x);

    head = insertatfirst(head, x);

    printf("\nElements after inserting a node at the beginning: \n");
    traversal(head);

    int y, ind;
    printf("\nEnter the element and the position at which you want to insert: ");
    scanf("%d %d", &y, &ind);
    head = insertatindex(head, y, ind);
    traversal(head);

    int a;
    printf("\nEnter the element you want to add at the end: ");
    scanf("%d", &a);
    head = insertatend(head, a);
    traversal(head);

    int b;
    printf("\nEnter an element you want to inser after a node: ");
    scanf("%d", &b);
    head=insertafternode(head, fourth, b);
    traversal(head);

    return 0;
}