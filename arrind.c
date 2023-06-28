#include<stdio.h>

int main()
{
    int n;
    printf("\nEnter the lenth of the array: ");
    scanf("%d", &n);
    int arr[n], ind[n];
    printf("\nEnter the value of elements: \n");
    for (int i=0;i<n;i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the value of index: \n");
    for(int i=0;i<n;i++)
    {
        printf("\nIndex[%d]: ", i);
        scanf("%d", &ind[i]);
        if(ind[i]>=n)
        {
            printf("\nWrong Input.\n\n");
            return 0;
        }
    }
    printf("\nGiven indexes: \n");
    for (int i=0;i<n;i++)
    {
        printf("%d\t", ind[i]);
    }
    printf("\nGiven elements: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
    int temp[n],i=0,j=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(ind[j]==i)
            {
                break;
            }
        }
        temp[i]=arr[j];
    }
    for(int i=0;i<n;i++)
    {
        ind[i]=i;
    }
    printf("\nAfter reording an array according to the given index: \n");
    printf("\nThe elements: \n");
    for (int i=0;i<n;i++)
    {
        printf("%d\t", temp[i]);
    }
    printf("\nThe indexes: \n");
    for (int i=0;i<n;i++)
    {
        printf("%d\t", ind[i]);
    }
}