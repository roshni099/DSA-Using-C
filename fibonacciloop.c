#include<stdio.h>
int main()
{
    int a=0, b=1, c, x, i;
    printf("\nEnter the number of elements: ");
    scanf("%d", &x);
    printf("\n%d", a);
    if (x>0)
    {
        printf(" %d", b);
    }
    for (i=2; i<x; i++)
    {
        c = a+b;
        printf(" %d", c);
        a=b;
        b=c;
    }
    return 0;
}