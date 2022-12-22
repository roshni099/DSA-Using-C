#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create(struct node *head)
{
    struct node *p = NULL;
    struct node *q = NULL;

    int n, i;

    if (head == NULL)
    {
        printf("\nEnter the total number of nodes: ");
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            if (head == NULL)
            {
                p = (struct node *)malloc(sizeof(struct node));
                printf("\nEnter the value of :\n");
                printf("\n[%d]Element: ", i);
                scanf("%d", &p->data);
                head = p;
                p->next = NULL;
            }
            else
            {
                q = (struct node *)malloc(sizeof(struct node));
                printf("\n[%d]Element: ", i);
                scanf("%d", &q->data);
                p->next = q;
                q->next = NULL;
                p = q;
            }
        }
        printf("\nThe list is created.\n");
    }
    else
    {
        printf("\nThe list is already created.\n");
    }

    return head;
}

struct node *reverse(struct node *p)
{
    struct node *q = p;
    if (q != NULL)
    {
        reverse(q->next);
        printf("%d\t", q->data);
    }
    else
    {
        return 0;
    }
}

void loop(struct node *head)
{
    struct node *p = head;
    struct node *q = head;

    while (1)
    {
        p = p->next->next;
        q = q->next;
        if (p == q)
        {
            printf("\nThis linked list has a loop.\n");
            break;
        }
        else if (p->next == NULL || q->next == NULL)
        {
            printf("\nThis linked list does not contain any loop.\n");
            break;
        }
    }
}

void display(struct node *head)
{
    struct node *p = head;
    int i = 0;
    while (p != NULL)
    {
        printf("\n[%d]Element: %d", i, p->data);
        p = p->next;
        i++;
    }
}

int main()
{
    struct node *head = NULL;
    struct node *first, *last;
    first = (struct node*)malloc(sizeof(struct node));
    last = (struct node*)malloc(sizeof(struct node));

    first->data = 20;
    last->data = 30;

    first->next = last;
    last->next = first;

    loop(first);

    head = create(head);
    printf("\nGiven elements:\n");
    display(head);
    loop(head);
    
    printf("\nReversed linked list:\n");
    head = reverse(head);
    display(head);

    return 0;
}