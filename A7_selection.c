#include <stdio.h>
void selection_sort(int a[100],int n)
{
    int i,j,p;
    for (i=0;i<n-1;i++)
    {
        p=i;
        for (j=i+1;j<n;j++)
        {
            if (a[j]<a[p])
            p=j;
        }
        int t=a[i];
        a[i]=a[p];
        a[p]=t;
    }
}
void main()
{
    int arr[100];
    int i,n;
    printf("\nENTER THE NUMBER OF ELEMENTS TO BE ADDED ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nENTER ELEMENT at %d ",i+1);
        scanf("%d",&arr[i]);
    }
    selection_sort(arr,n);
    printf("\nSORTED ARRAY: ");
    for (i=0;i<n;i++)
    printf("%d\t",arr[i]);
}