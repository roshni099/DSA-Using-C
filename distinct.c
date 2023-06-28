#include<stdio.h>
#include<stdbool.h>

int main()
{
    int n, p, count=0;
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
    bool flag[n];
    for (int i=0;i<n;i++)
    {
        flag[i]=true;
    }
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                flag[j]=false;
                break;
            }
        }
    }
    printf("\nAll the distinct numbers are as follows: \n");
    for (int i=0;i<n;i++)
    {
        if (flag[i]==true)
        {
            printf("%d\t", arr[i]);
        }
    }
}