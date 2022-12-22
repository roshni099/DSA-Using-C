#include<stdio.h>
int main()
{
    int n, m, a[m], b[n];
    n=10, m=10;
    int i, j;

    for (i=0;i<n;i++)
    {
        a[i]=i+1;
    }

    for (i=n/2;i<=n;i++)
    {
        for (j=2;j<=n;j=j*2)
        {
            b[i]= i+j;
        }
    }

    for (i=0;i<n;i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\n\n");

    for (i=1;i<=n/2;i++)
    {
        printf("%d\t", b[i]);
    }
    return 0;
}