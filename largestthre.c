#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nThe given array: \n");
    for (int i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }

    int first, second, third;
    first=second=third=INT_MIN;
    if (n<3)
    {
        printf("\n\nINVALID INPUT.\n");
        return 0;
    }
    else
    {
        for (int i=0;i<n;i++)
        {
            if (arr[i]>first)
            {
                third=second;
                second=first;
                first=arr[i];
            }
            else if(arr[i]>second)
            {
                third=second;
                second=arr[i];
            }
            else if(arr[i]>third)
            {
                third=arr[i];
            }
        }
    }

    printf("\nThe three largest number of the given array is: %d %d %d", first, second, third);
}