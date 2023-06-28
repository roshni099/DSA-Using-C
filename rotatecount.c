#include<stdio.h>

void display(int n, int arr[])
{
    for (int i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
}
int main()
{
    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the sorted and rotated elements: \n");
    for(int i=0;i<n;i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nThe given array: \n");
    display(n, arr);
    
    int count=0;
    for(int i=0;i<n;i++)
    {
        count++;
        if(arr[i]>arr[i+1])
        {
            break;
        }
    }
    if(count==n)
    {
        printf("\nThe sorted array is rotated 0 times.\n");
    }
    else
    {
        printf("\nThe sorted array is rotated %d times.\n", count);
    }
}