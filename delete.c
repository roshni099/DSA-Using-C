#include <stdio.h>
#include <stdlib.h>

void delete (int n, int *arr)
{
    int i, ele;
    printf("\nEnter the element you want to delete: ");
    scanf("%d", &ele);
    for (i = 0; i < n; i++)
    {
        if (ele == arr[i])
        {
            for (int j = i; j < n ; j++)
            {
                arr[j] = arr[j + 1];
            }
        }
    }
    printf("\nArray after deletion:\n");
    for (i = 0; i < n-1; i++)
    {
        printf("%d\t", arr[i]);
    }
}
int main()
{
    int n, i;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    printf("\nEnter the value of:\n");
    for (i = 0; i < n; i++)
    {
        printf("\nElement[%d]: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    delete (n, ptr);

    return 0;
}