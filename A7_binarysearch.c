#include <stdio.h>

int main()
{
    int n, i, j, ele, low, high, mid, x = -1, temp;
    printf("\nEnter the total number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter the value of element:\n");
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

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nSorted Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    low = 0;
    high = n - 1;
    printf("\nEnter the element you want to search: ");
    scanf("%d", &ele);

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == ele)
        {
            x = mid;
            break;
        }
        if (arr[mid] < ele)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (x == -1)
    {
        printf("\nELEMENT NOT FOUND");
    }
    else
    {
        printf("\nThe element %d is found at position %d", ele, x);
    }

    return 0;
}