#include<stdio.h>

void sort(int n, int arr[])
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the value of:\n");
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
    int key;
    printf("\nEnter the sum: ");
    scanf("%d", &key);
    int min_l=n+1;
    for (int i=0;i<n;i++)
    {
        int curr=arr[i];
        if(curr>key)
        {
            printf("\nThe smallest subarray is 1.");
            return 0;
        }
        for(int j=i+1;j<n;j++)
        {
            curr+=arr[j];
            if(curr>key && (j-i+1)<min_l)
            {
                min_l=j-i+1;
            }
        }
    }
    if(min_l==n+1)
    {
        printf("\nThe smallest subarray is 0.\n");
    }
    else
    {
        printf("\nThe smallest subarray is %d", min_l);
    }
}