#include <stdio.h>

void dist(int *ptr, int n)
{
    int a, b, i, j, s;
    int flag;
    printf("\nYour given array: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", ptr[i]);
    }
    printf("\nChoose from your given for minimum distance: ");
    scanf("%d %d", &a, &b);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if ((a == ptr[i] && b == ptr[j]) || (b == ptr[i] && a == ptr[j]))
            {
                if (i > j)
                {
                    s = i - j;
                    flag = 1;
                }
                else
                {
                    s = j - i;
                    flag = 1;
                }
            }
        }
    }

    if (flag == 1)
    {
        printf("\nThe minimum distance is %d", s);
    }
    else
    {
        printf("\nNumbers not present in the given array.");
    }
}

int main()
{
    int arr[100];
    int n, i;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Element[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }
    dist(arr, n);
    return 0;
}