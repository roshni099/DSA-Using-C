#include <stdio.h>
int main()
{
    int r, c, i, j, count = 0;
    int ch;
    int a, b;
    printf("\nEnter the number of rows and column for the matrix: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    int tra[10][10];

    printf("\nEnter the value of :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            arr[i][j] = 0;
        }
    }

    printf("\nPress 1: To enter the non-zero element.\nPress 2: To EXIT\n");
    while (1)
    {
        printf("\nPRESS A BUTTON: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            printf("\nRow and Column no.: ");
            scanf("%d %d", &a, &b);
            printf("\nEnter the value: ");
            scanf("%d", &arr[a][b]);
            break;
        }
        case 2:
        {
            printf("\nEXITED\n");
            goto start;
            break;
        }
        default:
        {
            printf("\nINVALID NUMBER\n");
            break;
        }
        }
    }

start:
    printf("\nGIVEN MATRIX:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            tra[j][i] = arr[i][j];
        }
    }

    printf("\nTranspose of the sparse matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", tra[i][j]);
        }
        printf("\n");
    }

    return 0;
}