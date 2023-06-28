#include <stdio.h>

int main()
{
    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the value of: ");
    for (int i = 0; i < n; i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nThe given array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    int ans[n];
    int p=0,q=n-1;
    for (int i=0;i<n;i++)
    {
        if((i+1)%2==0)
        {
            ans[i]=arr[q];
            q--;
        }
        else
        {
            ans[i]=arr[p];
            p++;
        }
    }    
    printf("\nAfter makin the even position greater than the odd position the array is: \n");
    for (int i=0;i<n;i++)
    {
        printf("%d\t", ans[i]);
    }
}