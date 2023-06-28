#include<stdio.h>

void swap(int *x, int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
}

void sort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void display(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%ld\t", arr[i]);
    }
}

void merge(int arr1[],int arr2[], int n, int m)
{
    int left=n-1;
    int right=0;

    while(left>=0 && right<m)
    {
        if(arr1[left]>arr2[right])
        {
            swap(&arr1[left], &arr2[right]);
            left--;
            right++;
        }
        else
        {
            break;
        }
    }
    
    sort(arr1,n);
    sort(arr2,m);    
}

int main()
{
    int n, m;
    printf("\nEnter the size of both the array: ");
    scanf("%d %d", &n, &m);
    printf("\nEnter the values of first Array:\n");
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d", &arr1[i]);
    }
    int arr2[m];
    printf("\nEnter the values of second array:\n");
    for(int i=0;i<m;i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d", &arr2[i]);
    }
    
    printf("\nFIRST ARRAY:\n");
    display(arr1, n);
    printf("\nSECOND ARRAY:\n");
    display(arr2, m);

    sort(arr1,n);
    sort(arr2,m);

    printf("\nSORTED FIRST ARRAY:\n");
    display(arr1,n);
    printf("\nSORTEDSECOND ARRAY:\n");
    display(arr2,m);

    merge(arr1,arr2,n,m);
    printf("\n\n----------AFTER MERGING----------\n\n");
    printf("\n\nFIRST ARRAY:\n");
    display(arr1,n);
    printf("\nSECOND ARRAY:\n");
    display(arr2,m);
}