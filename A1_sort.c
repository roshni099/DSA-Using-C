//Program to sort an array and find the elements between a given range.
#include <stdio.h>
int main()
{
    int arr[1000];
    int i, n;
    int temp;
    int l, u;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    printf("\nEnter the value of :");
    for (i = 0; i < n; i++)
    {
        printf("\n%d Element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nSORTED ARRAY: \n");
    for (i=0;i<n-1;i++)
    {
        for (int j=0;j<n-1-i;j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for (i=0;i<n;i++)
    {
        printf("\n%d Element: %d", i+1, arr[i]);
    }

    printf("\n\nEnter the range: ");
    printf("\nLower limit: ");
    scanf("%d", &l);
    printf("Upper limit: ");
    scanf("%d", &u);

    printf("\nElements between the given range: \n");
    for (i=0;i<n;i++)
    {
        if (arr[i]>=l && arr[i]<=u)
        {
            printf("%d\t", arr[i]);
        }
    }
    return 0;
}