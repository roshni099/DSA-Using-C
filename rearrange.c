#include<stdio.h>

int main()
{
    int n;
    printf("\nEnter the total number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the value of: \n");
    for (int i=0;i<n;i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nThe given array : \n");
    for (int i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
    for(int i=0;i<n-1;i++)
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
    int brr[arr[n-1]];
    int p=arr[n-1];
    for (int i=0;i<=p;i++)
    {
        brr[i]=-1;
    }
    for (int i=0;i<n;i++)
    {
        int q=arr[i];
        brr[q]=arr[i];
    }
    printf("\nAfter rearranging the array: \n");
    for (int i=0;i<=p;i++)
    {
        printf("%d\t", brr[i]);
    }
}