#include <stdio.h>
#include<stdbool.h>

int main()
{
    int n, pos = 0, neg = 0;
    printf("\nEnter the total number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the value of: \n");
    for (int i = 0; i < n; i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nThe given array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    for (int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            neg++;
        }
        else
        {
            pos++;
        }
    }
    int brr[n];
    bool flag[n];
    for (int i=0;i<n;i++)
    {
        flag[i]=false;
    }
    int ne[neg], po[pos];
    int a=0,b=0;
    for (int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            ne[a]=arr[i];
            a++;
        }
        else
        {
            po[b]=arr[i];
            b++;
        }
    }
    if (pos<=neg)
    {
        for (int i=0, j=0;i<n, j<pos;i=i+2,j++)
        {
            brr[i]=po[j];
            flag[i]=true;
        }
        int k=0;
        for(int i=0;i<n;i++)
        {
            if (flag[i]==false)
            {
                brr[i]=ne[k];
                k++;
            }
        }
    }   
    else
    {
        for (int i=1, j=0;i<n, j<neg;i=i+2,j++)
        {
            brr[i]=ne[j];
            flag[i]=true;
        } 
        int k=0;
        for(int i=0;i<n;i++)
        {
            if (flag[i]==false)
            {
                brr[i]=po[k];
                k++;
            }
        }
    } 
    printf("\nAfter segregating all the positive and negative integers : \n");
    for (int i=0;i<n;i++)
    {
        printf("%d\t", brr[i]);
    }
}