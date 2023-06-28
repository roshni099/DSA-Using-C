#include<stdio.h>

int main()
{
    int n, p;
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
    printf("\nEnter the number of position you want to rotate to the left: ");
    scanf("%d", &p);
    int ans[n];
    int q=p;
    for (int i=0;i<n-p;i++)
    {
        ans[i]=arr[q];
        q++;
    }
    q=0;
    for (int i=n-p;i<n;i++)
    {
        ans[i]=arr[q];
        q++;
    }
    printf("\nAfter rotating the array by %d position: \n", p);
    for (int i=0;i<n;i++)
    {
        printf("%d\t", ans[i]);
    }
}