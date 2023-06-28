#include<stdio.h>

void display(int arr[], int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
}

void sort(int n, int arr[])
{
    for (int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
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

void twopointer(int arr[], int n, int x)
{
    int i=0, j=n-1, ch=0;
    while(ch!=1 || (i==n-1 && j==0))
    {
        printf("\n\nA[i]+A[j] = %d + %d = %d", arr[i], arr[j], arr[i]+arr[j]);
        if(arr[i]+arr[j]>x)
        {
            printf("\nSince A[i]+A[j]>x, j--");
            j--;
        }
        else if(arr[i]+arr[j]<x)
        {
            printf("\nSince A[i]+A[j]<x, i++");
            i++;
        }
        else if(arr[i]+arr[j]==x)
        {
            printf("\nThus this signifies that the pair is found.");
            ch=1;
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

    printf("\nThe given array is:\n");
    display(arr,n);
    
    printf("\nAfter sorting the array:\n");
    sort(n, arr);
    display(arr, n);

    int x;
    printf("\nEnter the sum: ");
    scanf("%d", &x);
    twopointer(arr,n,x);
    return 0;
}