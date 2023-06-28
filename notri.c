#include<stdio.h>

int main()
{
    int n, p, count=0;
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
    for (int i=0;i<n;i++)
    {
        for (int j=i; j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nThe possible triangles are: ");
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            for (int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]>arr[k])
                {
                    printf("{%d,%d,%d},\t", arr[i], arr[j], arr[k]);
                    count++;
                }
            }
        }
    }
    printf("\nThe total number of triangles possible is: %d", count);
}