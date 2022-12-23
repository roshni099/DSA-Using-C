#include <stdio.h>
#include <stdlib.h>

//Function to swap the column.
void reverse(int n, int m, int arr[n][m])
{
    int rev[n][m];
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = m - 1, k = 0; k < m, j >= 0; k++, j--)
        {
            rev[i][k] = arr[i][j];
        }
    }

    printf("\nResultant matrix: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", rev[i][j]);
        }
        printf("\n");
    }
}

//Function to display the matix.
void display(int n, int m, int arr[n][m])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n, m, i, j;
    printf("\nEnter the number of rows and column: ");
    scanf("%d %d", &n, &m);
    int(*arr)[n][m] = malloc(sizeof *arr);
    printf("\nEnter the value of :\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("\n[%d][%d]Element: ", i + 1, j + 1);
            scanf("%d", &(*arr)[i][j]);
        }
    }

    printf("\n\nGiven matrix: \n");
    display(n, m,(*arr));
    reverse(n, m, (*arr));
    free(arr);
    return 0;
}