#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i, j, n;
    int temp;
    int *a;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    a=(int*)malloc(n*sizeof(int));
     
    printf("\nEnter the value of element:\n");
    for (i=0;i<n;i++)
    {
        printf("Element[%d]: ", i+1);
        scanf("%d", &a[i]);
    }

    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (a[j]%2!=0 && a[i]%2==0)
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }

    printf("\nThe rearranged array is: \n");
    for (i=0;i<n;i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}