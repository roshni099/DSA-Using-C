//Program to reverse the content of given array.
#include <stdio.h>

int main()
{
    int arr[1000];
    int n, i, temp;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter the value of : ");
    for (i = 0; i < n; i++)
    {
        printf("\n%d Element: ", i+1);
        scanf("%d", &arr[i]);
    }
    for (i=0;i<n/2;i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    printf("\nReversed Array:");
    for (i=0;i<n;i++)
    {
        printf("\n%d Element: %d", i+1, arr[i]);
    }
    return 0;
}