//Program to search the element from the given array.
#include<stdio.h>

int main()
{
    int arr[1000];
    int i, n, x, f;
    printf("\nEnter the number of element: ");
    scanf("%d", &n);

    printf("\nEnter the value of : ");
    for (i=0;i<n;i++)
    {
        printf("\n%d Element: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element you want to find : ");
    scanf("%d", &x);

    for (i=0;i<n;i++)
    {
        if (x==arr[i])
        {
            f = 1;
            break;
        }
    } 
    if (f == 1)
    {
        printf("\nElement found. It is %dth element.", i+1);
    }
    else
    {
        printf("\nElement not found.");
    }
    return 0;
}