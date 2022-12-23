#include <stdio.h>
#include <stdlib.h>
#define m 5

typedef struct array
{
    int data[m];
    int r;
    int f;
} arr;

int insert(arr *q, int n)
{
    if ((q->r == m - 1 && q->f == 0) || (q->f == q->r + 1))
    {
        printf("\nINSERTION NOT POSSIBLE.\n");
        return 1;
    }
    if(q->r==-1)
    {
        q->r=q->f=0;
        q->data[q->r]=n;
    }
    else
    {
        q->r=(q->r+1)%m;
        q->data[q->r]=n;
    }

    return 0;
}

int delete(arr *q, int *n)
{
    if (q->f==-1)
    {
        printf("\nDELETION NOT POSSIBLE.\n");
        return 1;
    }
    if (q->r==q->f)
    {
        *n=q->data[q->f];
        q->f=q->r=-1;
    }
    else
    {
        *n=q->data[q->f];
        q->f=(q->f+1)%m;
    }

    return 0;
}

int main ()
{
    arr q;
    q.f=q.r=-1;
    int n, x, y;
    int i;
    for (i=0;i<m-2;i++)
    {
        scanf("%d", &n);
        x=insert(&q, n);
    }
    y=delete(&q,&n);
    y=delete(&q,&n);
    for (i=0;i<m-1;i++)
    {
        scanf("%d", &n);
        x=insert(&q,n);
    }
    for (i=0;i<m;i++)
    {
        y=delete(&q,&n);
        printf("%d", n);
    }

    printf("\n");

    return 0;
}