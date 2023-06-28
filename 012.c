#include<stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void display(int n, int arr[])
{
    for (int i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
}
void sort(int n, int arr[])
{
    int low=0, mid=0, hi=n-1;
    while(mid<=hi)
    {
        switch(arr[mid])
        {
            case 0:
            {
                swap(&arr[low], &arr[mid]);
                low+=1;
                mid+=1;                
                break;
            }
            case 1:
            {
                mid+=1;
                break;
            }
            case 2:
            {
                swap(&arr[mid], &arr[hi]);
                hi-=1;
                break;
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
    printf("\nEnter the 0's,1's and 2's: \n");
    for(int i=0;i<n;i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d",&arr[i]);
    }
    printf("\nThe given array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    sort(n, arr);
    printf("\nfter sorting the array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
}