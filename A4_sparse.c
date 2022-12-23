#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, c, i, j, count = 0;
    printf("\nEnter the number of rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);
    int(*arr)[r][c];
    arr = malloc(sizeof *arr);
    printf("\nEnter the value of elements: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("\nElement[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &(*arr)[i][j]);
            if ((*arr)[i][j] == 0)
            {
                count++;
            }
        }
    }

    printf("\nGiven matrix: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", (*arr)[i][j]);
        }
        printf("\n");
    }

    if (count > (r * c) / 2)
    {
        printf("\n\nThe given matrix is a sparse matrix.");
    }
    else
    {
        printf("\n\nThe given matrix is not a sparse matrix.");
    }
    return 0;
}