#include<stdio.h>

int main()
{
    int n, p;
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
    for (int i=1;i<n;i=i+2)
    {
        if (n%2==0)
        {
            if(i==n-1)
            {
                if (arr[i]>arr[i-1])
                {
                    int temp;
                    temp=arr[i-1];
                    arr[i-1]=arr[i];
                    arr[i]=temp;
                    break;
                }
                else
                {
                    break;
                }
            }
        }
        if (arr[i]>arr[i-1] || arr[i]>arr[i+1])
        {
            if(arr[i]>arr[i-1])
            {
                int temp;
                temp=arr[i-1];
                arr[i-1]=arr[i];
                arr[i]=temp;
            }
            else if(arr[i]>arr[i+1])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    printf("\nAfter sorting the array in waveform: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }

}