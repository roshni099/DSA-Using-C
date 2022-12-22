#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr, n;
    printf("\nEnter the size of array: ");
    scanf("%d", &n);
    
    ptr = (int*) calloc(n, sizeof(int));
    for (int i=0;i<n;i++)
    {
        printf("\nEnter the the value of %d element of this element: ", i);
        scanf("%d", &ptr[i]);
    }
    printf("\nARRAY");
    for (int i=0;i<n;i++)
    {
        printf("\n%d Element of array is: %d\n", i, ptr[i]);
    }

    printf("\nEnter the size of the new array: ");
    scanf("%d", &n);

    ptr = (int*) realloc(ptr, n*sizeof(int));
    
    for (int i=0;i<n;i++)
    {
        printf("\nEnter the value of %d element: ", i);
        scanf("%d", &ptr[i]);
    }
    printf("\nNEW ARRAY");
    for (int i=0;i<n;i++)
    {
        printf("\n%d Element of the new array is %d", i, ptr[i]);
    }

    return 0;
}