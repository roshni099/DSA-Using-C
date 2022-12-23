#include <stdio.h>
int main()
{
    int n, i, j, key;
    printf("\nEnter the number of total element: ");
    scanf("%d", &n);
    int arr[n];

    printf("\nEnter the value of: \n");
    for (i = 0; i < n; i++)
    {
        printf("\n[%d]Element: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nGiven Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    printf("\nSorted Array:\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                               