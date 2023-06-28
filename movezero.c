#include <stdio.h>
#include<limits.h>

// int main()
// {
//     int n, i=0,j=INT_MIN;
//     printf("\nEnter the number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("\nEnter the value of: \n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("Element[%d]: ", i);
//         scanf("%d", &arr[i]);
//     }
//     printf("\nThe given array: \n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d\t", arr[i]);
//     }
//     for (i=0;i<n;i++)
//     {
//         if (arr[i]==0)
//         {
//             for (j=n-1;j>=0;j--)
//             {
//                 if (arr[j]!=0)
//                 {
//                     break;
//                 }
//             }
//             int temp;
//             temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//             for (j=n-1;j>=0;j--)
//             {
//                 if(arr[j]!=0)
//                 {
//                     break;
//                 }
//             }
//         }
//         if(i==j)
//         {
//             break;
//         }
//     }
//     printf("\nAfter moving all the zeros in the end: \n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t", arr[i]);
//     }
// }

int main()
{
    int n, i=0,j=INT_MIN;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the value of: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Element[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nThe given array: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    int count=0;

    for (int i=0;i<n;i++)
    {
        if (arr[i]!=0)
        {
            arr[count++]=arr[i];
        }
    }
    while(count<n)
    {
        arr[count++]=0;
    }

    printf("\nAfter shifting all the zeros to the end: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}