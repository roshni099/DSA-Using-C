//Program to find the next greater element in a given array.
#include<stdio.h>
#include<stdlib.h>

void next(int arr[], int n)
{
    int i, j, next;

    for (i=0;i<n;i++)
    {
        next=-1;
        for (j=i+1;j<n;j++)
        {
            if (arr[i]<arr[j])
            {
                next = arr[j];
                break;
            }
        }
        printf("\n%d Element = %d", i+1, next);
    }

}

int main()
{
    int arr[1000];
    int i, n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter the value of : ");
    for (i=0;i<n;i++)
    {
        printf("\n%d Element: ", i+1);
        scanf("%d", &arr[i]);
    }

    next(arr, n);
    return 0;
}