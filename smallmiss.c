#include<stdio.h>

int main()
{
    int n;
    printf("\nEnter the elements of the sorted array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the value of : \n");
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
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            printf("\nThe array is not sorted.\n");
            return 0;
        }
    }

    for (int i=0;i<n;i++)
    {
        if(arr[i]!=i)
        {
            printf("\nThe smallest missing number is: %d", i);
            return 0;
        }
    }
    printf("\nThe smallest missing number is %d", n);
}