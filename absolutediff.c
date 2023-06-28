#include<stdio.h>

void display(int n, int arr[])
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
}

void absolutediff(int n, int arr[], int k)
{
    int brr[n];
    for (int i=0;i<n;i++)
    {
        int m=0;
        if(arr[i]>k)
        {
            m=arr[i]-k;
        }
        else
        {
            m=k-arr[i];
        }
        brr[i]=m;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(brr[j]>brr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

                int tem=brr[j];
                brr[j]=brr[j+1];
                brr[j+1]=tem;
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
    printf("\nenter the value of: ");
    for(int i=0;i<n;i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d", &arr[i]);
    }   
    printf("\nThe given array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
    int k;
    printf("\nEnter the number for absolute difference sorting: ");
    scanf("%d", &k);
    
    absolutediff(n, arr, k);
    printf("\nAfter sorting by absolute difference:\n");
    display(n, arr);
    return 0;
}