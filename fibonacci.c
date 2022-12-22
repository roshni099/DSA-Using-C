#include<stdio.h>
int fib(int n)
{
    if (n==0 || n==1)
    {
        return n;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
int main()
{
    int x;
    printf("\nEnter a number: ");
    scanf("%d", &x);
    printf("\nThe result is %d", fib(x));
    return 0;
}