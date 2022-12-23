#include <stdio.h>
void merge(int arr[100],int lb,int mid,int ub);
void merge_sort(int arr[100],int lb,int ub)
{
    int mid;
    if (lb<ub)
    {
        mid=(lb+ub)/2;
        merge_sort(arr,lb,mid);
        merge_sort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }

}

void merge(int arr[100],int lb,int mid,int ub)
{
    int i,j,k;
    int b[100];
    i=lb;
    j=mid+1;
    k=lb;
    while (i<=mid && j<=ub)
    {
        if(arr[i]<arr[j])
        {
            b[k]=arr[i];
            i++;
        }
        else
        {
            b[k]=arr[j];
            j++;
        }
        k++;
    }
    if (i>mid)
    {
        while (j<=ub)
        {
            b[k]=arr[j];
            k++;
            j++;
        }
    }
    if (j>ub)
    {
        while (i<=mid)
        {
            b[k]=arr[i];
            k++;
            i++;
        }
    }
    for(k=lb;k<=ub;k++)
    arr[k]=b[k];
    
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
    merge_sort(arr,0,n-1);
    printf("\nSORTED ELEMENTS ARE: ");
    for(int k=0;k<n;k++)
    printf("%d\t",arr[k]);
}