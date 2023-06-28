#include <stdio.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void major(int arr[], int n, int k)
{
    int brr[n];
    for (int i = 0; i < n; i++)
    {
        brr[i] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        if (brr[i] == 1)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    brr[j] = 0;
                    count++;
                }
            }
        }
        if (count > k)
        {
            printf("%d\t", arr[i]);
        }
    }
}

int main()
{
    int n;
    printf("\nEnter the size of the array: ");
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

    printf("\nThe elements that appears more than n/2 of the times are: ");
    major(arr, n, n / 2);
}
