#include<stdio.h>
int fac(int n)
{
    if (n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*fac(n-1);
    }
}
int main()
{
    int a;
    printf("\nEnter a number: ");
    scanf("%d", &a);
    printf("\nFactorial of %d is %d", a, fac(a));
    return 0;
}