#include <stdio.h>
#include <stdlib.h>
//Function to swap the elements.
void swap(int n, int mat[n][n])
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
    printf("\n\nAfter swaping the major diagonal elements to minor diagonal element, the matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

//Function to find the largest element.
void largest(int n, int mat[n][n])
{
    int i, j, max = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (max < mat[i][j])
            {
                max = mat[i][j];
            }
        }
    }
    printf("\nThe largest element above the leading diagonal is %d", max);
}

int main()
{
    int n, i, j;
    printf("\nEnter a number for the square matrix: ");
    scanf("%d", &n);
    int(*arr)[n][n] = malloc(sizeof *arr);
    printf("\nEnter the value of :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\nElement [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &(*arr)[i][j]);
        }
    }

    printf("\nGiven matrix: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", (*arr)[i][j]);
        }
        printf("\n");
    }

    largest(n, (*arr));
    swap(n, (*arr));
    free(arr[i]);
    return 0;
}