#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter the size of Matrix NxN: ");
    scanf("%d", &n);

    
    int arr[n][n];

    
    printf("Enter the value of:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\nElement[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    
    int max_col=0, min_row=0;

    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            min_row = max_col = arr[i][j];

            
            for (int k = 0; k < n; k++)
            {
                if (arr[i][k] < min_row)
                {
                    min_row = arr[i][k];
                }
            }

           
            for (int k = 0; k < n; k++)
            {
                if (arr[k][j] > max_col)
                {
                    max_col = arr[k][j];
                }
            }

            
            if (min_row == arr[i][j] && max_col == arr[i][j])
            {
                printf("Found an element: %d \n", min_row);
            }
        }
    }
    return 0;
}

