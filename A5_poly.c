#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    int pow;
    struct Node *next;
}*head=NULL;
void createlist(int k)
{
    printf("Enter values for the nodes : \n");
    for(int i=0;i<k;i++)
    {
        int data,pow;
        printf("Enter coefficient : \n");
        scanf("%d",&data);
        printf("Enter power of x : \n");
        scanf("%d",&pow);
        struct Node *newnode = (struct Node *) malloc(sizeof(struct Node));
        newnode->data = data;
        newnode->pow = pow;
        newnode->next = NULL;

        if(head==NULL)
        head = newnode;

        else
        {
            struct Node *last = head;

            while(last->next!=NULL)
            {
                last = last->next;
            }
            last->next = newnode;

        }

    }
}

void printNode(struct Node *n)
{
    while(n!=NULL)
    {
        if(n->next==NULL)
        {
            if(n->pow==0)
            printf("%d",n->data);
            else
            printf("%dx^%d",n->data,n->pow);
        }
        else
        {
            if(n->pow==0)
            printf("%d + ",n->data);
            else
            printf("%dx^%d + ",n->data,n->pow);
        }
        n=n->next;
    }
}
int main()
{
    int k;
    printf("Enter the number of terms in the polynomial : ");
    scanf("%d",&k);
    createlist(k);
    printNode(head);
    return 0;
}