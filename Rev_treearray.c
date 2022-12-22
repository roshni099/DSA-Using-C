#include<stdio.h>
#include<stdlib.h>

void buildtree(int arr[], int index, int item)
{
    int ch, n;
    arr[index]=item;
    printf("\nDo you want a left child of %d(0/1): ", item);
    scanf("%d", &ch);
    if (ch==1)
    {
        printf("\nEnter the value: ");
        scanf("%d", &n);
        buildtree(arr , (2*index)+1, n);
    }
    printf("\nDo you want a right child of %d(0/1): ", item);
    scanf("%d", &ch);
    if (ch==1)
    {
        printf("\nEnter the value: ");
        scanf("%d", &n);
        buildtree(arr, (2*index)+2, n);
    }
}

int main()
{
    int t[20];
    int item;
    for (int i = 0; i < 20; i++)
    {
        t[i] = -1;
    }
    printf("Enter the root node.");
    scanf("%d", &item);
    buildtree(t, 0, item);
    printf("TREE=\n");
    for (int i = 0; i < 20; i++)
    {
        if (t[i] == -1)
        {
            printf("_");
        }
        else
        {
            printf("%d", t[i]);
        }
    }
}