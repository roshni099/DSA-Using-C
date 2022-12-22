#include <stdio.h>

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void insertionsort(int *arr, int n)
{
    int key, i, j;
    for (i = 1; i <= n - 1; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    printf("\nAfter insertion sort:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void selectionsort(int *arr, int n)
{
    int min, j, i;
    for (i=0;i<n-1;i++)
    {
        min=i;
        for (j=i+1;j<n;j++)
        {
            if (arr[j]<arr[min])
            {
                min=j;
            }
        }
        int temp;
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }

    printf("\nAfter sorting the array using selection sort:\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
}

int partition(int *arr, int low, int high)
{
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    int temp;

    do
    {
        while(arr[i]<=pivot)
        {
            i++;
        }

        while(arr[j]>pivot)
        {
            j--;
        }

        if (i<j)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }while(i<j);

    temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
}

void quicksort(int *arr, int low, int high)
{
    int index;
    int n =high+1;

    if (low<high)
    {
        index=partition(arr,low, high);
        quicksort(arr,low,index-1);
        quicksort(arr,index+1,high);
    }

    printf("\nAfter sorting the array using quick sort:\n");

    for (int i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
}

int main()
{
    int n, i;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("\nEnter the value of");

    for (i = 0; i < n; i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nUndorted array: \n");
    display(arr, n);

    insertionsort(arr, n);

    selectionsort(arr, n);

    quicksort(arr, 0, n-1);
    return 0;
}