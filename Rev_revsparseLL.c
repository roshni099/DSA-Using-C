#include <stdio.h>
#include <stdlib.h>

struct node
{
    int row;
    int column;
    int data;
    struct node *next;
} *head = NULL;

void create(int val, int r, int c)
{
    struct node *p, *q;
    p = head;
    if (p == NULL)
    {
        p = (struct node *)malloc(sizeof(struct node));
        p->data = val;
        p->next = NULL;
        p->row = r;
        p->column = c;
        head = p;
    }
    else
    {
        while(p->next!=NULL)
        {
            p=p->next;
        }
        q = (struct node *)malloc(sizeof(struct node));
        q->data = val;
        q->column = c;
        q->row = r;
        q->next = NULL;
        p->next = q;
    }
}

void display(struct node *head)
{
    struct node *p, *q, *r;
    p = q = r = head;
    printf("\nRow position.\n");
    while (p != NULL)
    {
        printf("%d\t", p->row);
        p = p->next;
    }
    printf("\nColumn position.\n");
    while (q != NULL)
    {
        printf("%d\t", q->column);
        q = q->next;
    }
    printf("\nValue:\n");
    while (r != NULL)
    {
        printf("%d\t", r->data);
        r = r->next;
    }
}

int main()
{
    int i, j, m, n;
    printf("\nEnter the number of rows and column of the sparse matrix: ");
    scanf("%d %d", &m, &n);
    int arr[m][n];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\nElement[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i][j] != 0)
            {
                create(arr[i][j], i, j);
            }
        }
    }

    display(head);
    return 0;
}