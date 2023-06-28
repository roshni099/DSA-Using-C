#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
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
            if (head == NULL)
            {
                p = (struct node *)malloc(sizeof(struct node));
                printf("\nElement[%d]: ", i);
                scanf("%d", &p->data);
                p->next = p;
                head = p;
            }
            else
            {
                q = (struct node *)malloc(sizeof(struct node));
                printf("\nElement[%d]: ", i);
                scanf("%d", &q->data);
                q->next = head;
                p->next = q;
                p = q;
                if (i == n - 1)
                {
                    last = p;
                }
            }
        }
    }
    else
    {
        printf("\nThe list has already been created.\n");
    }
}

void display(struct node *head, struct node *last)
{
    struct node *p = head;
    do
    {
        printf("%d\t", p->data);
        p = p->next;
    } while (p != last->next);
}

void reverse(struct node *head)
{
    struct node *p = head;
    if (p != last)
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
    int ele;
    printf("\nEnter the element: ");
    scanf("%d", &ele);
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = ele;
    p->next = head;
    head = p;
    last->next = head;
}

void insertatend()
{
    int ele;
    printf("\nEnter the element: ");
    scanf("%d", &ele);
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = ele;
    p->next = head;
    last->next = p;
    last = p;
}

void insertatindex()
{
    int ind, ele;
    printf("\nEnter the index and the element: ");
    scanf("%d %d", &ind, &ele);
    int i = 0;
    struct node *p = head, *q;
    while (i != ind - 1)
    {
        p = p->next;
        i++;
    }
    q = (struct node *)malloc(sizeof(struct node));
    q->data = ele;
    q->next = p->next;
    p->next = q;
}

void deleteatbeg()
{
    head = head->next;
    last->next = head;
}

void deleteatend()
{
    struct node *p = head;
    while (p->next != last)
    {
        p = p->next;
    }
    p->next = head;
    last = p;
}

void deleteatindex()
{
    int ind;
    printf("\nEnter the index: ");
    scanf("%d", &ind);
    struct node *p = head;
    int i = 0;
    while (i != ind - 1)
    {
        p = p->next;
        i++;
    }
    p->next = p->next->next;
}

int main()
{
    printf("\nENTER:\n1.For creation.\n2.For display.\n3.For reverse display.\n4.For insertion at the beginning.\n5.For insertion at the end.\n6.For insertion at index.\n7.For deletion at the beginning.\n8.For deletion at the end.\n9.For deletion at the index.\nFor Exit.");
    int ch;
    while (1)
    {
        printf("\nPRESS A BUTTON: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            create();
            display(head, last);
            break;
        }
        case 2:
        {
            printf("\nThe giveb linked list: \n");
            display(head, last);
            break;
        }
        case 3:
        {
            printf("\nThe reverse display for the given linked list: \n");
            reverse(head);
            break;
        }
        case 4:
        {
            insertatbeg();
            printf("\nAfter insertion at the beginning: \n");
            display(head, last);
            break;
        }
        case 5:
        {
            insertatend();
            printf("\nAfter insertion at the end: \n");
            display(head, last);
            break;
        }
        case 6:
        {
            insertatindex();
            printf("\nAfter insertion at the given index: \n");
            display(head, last);
            break;
        }
        case 7:
        {
            deleteatbeg();
            printf("\nAfter the deletion at the beginning: \n");
            display(head, last);
            break;
        }
        case 8:
        {
            deleteatend();
            printf("\nAfter deletion at the end: \n");
            display(head, last);
            break;
        }
        case 9:
        {
            deleteatindex();
            printf("\nAfter the deletion of the given index: \n");
            display(head, last);
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