#include <stdio.h>
int main()
{
    int n, i, j, x = 0, y = 0, z = 0;
    printf("\nEnter a number for a square matrix: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("\nEnter the value of: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\nElement[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nGiven Matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n\n");
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j > i)
            {
                if (arr[i][j] != 0)
                {
                    x = 1;
                }
            }
            if (i > j)
            {
                if (arr[i][j] != 0)
                {
                    y = 1;
                }
            }
        }
    }

    if (x == 1)
    {
        printf("\nNot a Lower Triangular Matrix.\n");
    }
    else
    {
        printf("\nIt is a Lower Triangular Matrix.\n");
    }

    if (y == 1)
    {
        printf("\nNot a Upper Triangular Matrix.\n");
    }
    else
    {
        printf("\nIt is a Upper Triangular Matrix.\n");
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            int cell = arr[i][j];
            if ((i == j) || (i + 1 == j) || (i - 1 == j))
            {
                if (arr[i][j] == 0)
                {
                    z = 1;
                }
            }
            else
            {
                if (arr[i][j] != 0)
                {
                    z = 1;
                }
            }
        }
    }

    if (z == 1)
    {
        printf("\nNot a Tridiagonal Matrix.\n");
    }
    else
    {
        printf("\nIt is a Tridiagonal Matrix.\n");
    }

    return 0;
}