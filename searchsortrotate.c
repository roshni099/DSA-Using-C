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

int search(int arr[], int low, int high, int key)
{
    if(high<low)
    {
        return -1;
    }
    int mid=(low+high)/2;
    if(key==arr[mid])
    {
        return mid;
    }
    else if(key>arr[mid])
    {
        search(arr,(mid+1), high, key);
    }
    else if(key<arr[mid])
    {
        search(arr, low, (mid-1), key);
    }
}

int main()
{
    int n, key;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the value of : \n");
    for (int i=0;i<n;i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nThe given array: \n");
    display(n, arr);
    
    sort(n, arr);
    printf("\nAfter sorting the array: \n");
    display(n, arr);

    int d=3;
    int temp[n];
    int j=0;
    for(int i=d;i<n;i++)
    {
        temp[j]=arr[i];
        j++;
    }
    for(int i=0;i<d;i++)
    {
        temp[j]=arr[i];
        j++;
    }
    printf("\nAfter rotating the array: \n");
    display(n,temp);

    printf("\nEnter the element you want to search in the sorted and the rotated array: ");
    scanf("%d", &key);
    int x=search(arr,0,n-1, key);
    if(x==-1)
    {
        printf("\nThe element is not present in the array.\n\n");
        return 0;
    }
    if(x<d)
    {
        int y=n-d+x;
        printf("\nThe given element %d is fount at position %d", key, y);
    }
    else
    {
        int y=x-3;
        printf("\nThe given element %d is found at position %d", key, y);
    }
}