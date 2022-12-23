#include<stdio.h>
int main()
{
    int n, i, a, pos, x=0;
    printf("\nEnter the total number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("\nEnter the value of element:\n");

    for (i=0;i<n;i++)
    {
        printf("\n[%d]Element: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nGiven Array: \n");
    for (i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\nEnter the element you want to search: ");
    scanf("%d", &a);
    for (i=0;i<n;i++)
    {
        if (a==arr[i])
        {
            pos=i;
            x=1;
        }
    }

    if (x==1)
    {
        printf("\nThe element %d is present at position %d", a, pos);
    }
    else
    {
        printf("\nELEMENT NOT FOUND");
    }


    return 0;
}