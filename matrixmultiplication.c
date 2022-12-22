#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], mul[10][10];
    int i, j, k;
    int n1, m1, n2, m2;
    printf("\nEnter the number of rows and column of 1st matrix: ");
    scanf("%d %d", &n1, &m1);
    printf("\nEnter the number of roes and column of 2nd matrix: ");
    scanf("%d %d", &n2, &m2);

    printf("\nEnter the elements of first matrix:\n");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < m1; j++)
        {
            printf("\nElement[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter the elements of second matrix:\n");
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < m2; j++)
        {
            printf("\nElement[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    if (m1 == n2)
    {
        for (i = 0; i < m1; i++)
        {
            for (j = 0; j < n2; j++)
            {
                mul[i][j] = 0;
                for (k = 0; k < n2; k++)
                {
                    mul[i][j] += a[i][k] * b[k][j];
                }
            }
        }
    }
    else
    {
        printf("\nMULTIPLICATION NOT POSSIBLE");
    }

    printf("\nFirst Matrix: \n\n");
    for (i=0;i<n1;i++)
    {
        for (j=0;j<m1;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n\n");
    }

    printf("\nSecond Matrix: \n\n");
    for (i=0;i<n2;i++)
    {
        for (j=0;j<m2;j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n\n");
    }

    printf("\nMultiplied matrix: \n\n");
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}