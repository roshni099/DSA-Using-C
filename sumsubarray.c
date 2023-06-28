#include<stdio.h>

int main()
{
    int n, p, s, flag=0;
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
    printf("\nEnter an integer sum: ");
    scanf("%d", &s);
    for (int i=0;i<n;i++)
    {
        for (int j=i;j<n;j++)
        {
            int sum=0;
            for (int k=i; k<=j;k++)
            {
                sum+=arr[k];                
            }
            if(sum==s)
            {
                printf("\nThe sum is found between %d and %d", i, j);
                flag=1;
            }
        }
    }
    if (flag==0)
    {
        printf("\nNo subarray found.\n");
    }
}