#include<stdio.h>

int main()
{
    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the value of: \n");
    for (int i=0;i<n;i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nThe given array: \n");
    for (int i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
    
    printf("\nThe subarray of the given array: \n");
    for (int i=0;i<n;i++)
    {
        for (int j=i;j<n;j++)
        {
            if (i==j)
            {
                printf("[%d] ", arr[i]);
            }
            else
            {
                printf("[");
                for (int k=i; k<j;k++)
                {
                    printf("%d,", arr[k]);
                }
                printf("%d] ", arr[j]);
            }
        }
    }
}