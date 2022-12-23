#include <stdio.h>

//Function to find the sun of upper diagonal and lower diagonal and the product of the diagonal.
void diagonal(int n, int a[][n])
{
    int i, j, maj=0, min=0, p=1;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (j > i)
            {
                maj += a[i][j];
            }
            else if (i>j)
            {
                min += a[i][j];
            }
            if (i==j)
            {
                p *= a[i][j];
            }
        }
    }
    printf("\n\nThe sum of the elements above the diagonal is %d", maj);
    printf("\n\nThe sum of the elements below the diagonal is %d", min);
    printf("\n\nThe product of the diagonal elements is %d", p);
}


//Function to find the non-zero elements.
void nonzero(int n, int ptr[][n])
{
    int i, j, sum=0;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (ptr[i][j] != 0)
            {
                sum++;
            }
        }
    }
    printf("\nThe total number of non zero elements are %d", sum);
}

int main()
{
    int i, j;
    int n;
    printf("\nEnter the number of elements for square matrix: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("\nEnter the value of: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\nElement A[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nThe given matrix is:\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n\n");
    }

    nonzero(n, arr);
    diagonal(n, arr);
    return 0;
}