#include<stdio.h>

int main()
{
    int n;
    printf("\nEnter the total number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the value of: \n");
    for (int i=0;i<n;i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nThe given array : \n");
    for (int i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
    int ans[n], p=0,q=n-1;
    for (int i=0;i<n;i++)
    {
        if (arr[i]%2==0)
        {
            ans[p]=arr[i];
            p++;
        }
        else
        {
            ans[q]=arr[i];
            q--;
        }
    }
    printf("\nAfter sorting in even odd order the array is: \n");
    for (int i=0;i<n;i++)
    {
        printf("%d\t", ans[i]);
    }
}