#include<stdio.h>

void display(int n, int arr[])
{
    for (int i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
}

void sort(int n, int arr[])
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the value of: \n");
    for (int i=0;i<n;i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nThe given array is: \n");
    display(n, arr);
    
    int brr[(n*(n+1))/2];
    int x=(n*(n+1))/2;
    int y=0;
    for (int i=0;i<n;i++)
    {
        for (int j=i;j<n;j++)
        {
            int sum=0;
            for (int k=i;k<=j;k++)
            {
                sum+=arr[k];
            }
            brr[y]=sum;
            y++;            
        }
    }
    printf("\nAll the sum of the subarray are: \n");
    display(x,brr);
    int k;
    sort(x, brr);
    printf("\nAfter sorting the array: \n");
    display(x, brr);
    printf("\nEnter the k-th no. to find the largest sum: ");
    scanf("%d", &k);
    if(k>x)
    {
        printf("\nInvalid Input.\n");
    }
    else
    {
        printf("\nThe %d-th largest number is: %d", k, brr[x-k]);
    }
}