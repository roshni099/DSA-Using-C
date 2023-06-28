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
    printf("\nAll the leaders in the given array are: ");
    for(int i=0;i<n;i++)
    {
        bool flag=true;
        for(int j=i+1;j<n;j++)
        {
            if (arr[i]<arr[j])
            {
                flag=false;
            }
        }
        if(flag==true)
        {
            printf("%d\t", arr[i]);
        }
    }
}