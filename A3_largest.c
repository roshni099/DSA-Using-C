#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, pos;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int *arr;
    arr=(int*)malloc(n*sizeof(int));
    printf("\nEnter the value of :\n");
    for (int i=0;i<n;i++)
    {
        printf("\n[%d]Element: ", i+1);
        scanf("%d", &arr[i]);
    }
    int max=arr[0], count=0;
    for (int i=1;i<n;i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
            pos = i;
            count=0;
        }
        else if (max==arr[i])
        {
            count++;
        }
    }
    printf("\nThe largest number in the array is %d", max);
    printf("\nThe number of times it appears in the array is %d", count+1);
    return 0;
}