#include <stdio.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int peak(int arr[], int n)
{
    if (n == 1)
    {
        printf("%d\t", arr[0]);
    }
    if (arr[0] >= arr[1])
    {
        printf("%d\t", arr[0]);
    }
    if (arr[n - 1] >= arr[n - 2])
    {
        printf("%d\t", arr[n-1]);
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
        {
            printf("%d\t", arr[i]);
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
    for (int i = 0; i < n; i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nThe given array:\n");
    display(arr, n);

    printf("\nAll the peak elements are: ");
    peak(arr,n);
    return 0;
}