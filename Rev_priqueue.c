#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int front;
int rear;
int que[MAX];

void create()
{
    front=rear=-1;
}

void check(int data)
{
    int i, j;
    for (i=0;i<=rear;i++)
    {
        if (data>=que[i])
        {
        for (j=rear+1;j>i;j--)
        {
            que[j]=que[j-1];
        }
        que[i]=data;
        return;
        }
        que[i]=data;
    }

}

void insertpri(int data)
{
    if (rear>=MAX-1)
    {
        printf("\nQueue Overflow.\n");
    }
    if ((front==-1)&&(rear==-1))
    {
        front++;
        rear++;
        que[rear]=data;
        return;
    }
    else
    {
        check(data);
        rear++;
    }
}

void pridelete(int data)
{
    int i, j;
    if ((front==-1)&&(rear==-1))
    {
        printf("\nQueue Underflow.\n");
        return ;
    }

    for (i=0;i<=rear;i++)
    {
        if (data==que[i])
        {
            for(;i>rear;i++)
            {
                que[i]=que[i+1];
            }
            que[i]=-99;
            rear--;

            if (rear==-1)
            {
                front=-1;
            }
            return;
        }
    }

    printf("\n%d not found in queue to delete.\n", data);
}

void display()
{
    if (front==-1&&rear==-1)
    {
        printf("\nQueue is empty.\n");
        return ;
    }
    for (;front<=rear;front++)
    {
        printf("%d\t", que[front]);
    }
    front =0;
}

int main()
{
    int n, ch;

     printf("\n1 - Insert an element into queue");
    printf("\n2 - Delete an element from queue");
    printf("\n3 - Display queue elements");
    printf("\n4 - Exit");

    create();

    while(1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
            printf("\nEnter the element: ");
            scanf("%d", &n);
            insertpri(n);
            break;
            case 2:
            printf("\nEnter the element to be deleted: ");
            scanf("%d", &n);
            pridelete(n);
            break;
            case 3:
            display();
            break;
            case 4:
            printf("\nEXITED.\n");
            exit(0);
            case 5:
            printf("\nINCORRECT CHOICE.\nPlease choose a valid number.\n");
        }
    }

    return 0;
}