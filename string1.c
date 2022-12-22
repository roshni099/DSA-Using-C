#include<stdio.h>
#include<string.h>
void rev(int a[])
{
    printf("Before reverse: \n");
    for (int i=0;i<10;i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n\nAfter reverse: \n");
    for (int j=9;j>-1;--j)
    {
        printf("%d\t", a[j]);
    }
    printf("\n\n");
    
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    rev(arr);
    return 0;
}