#include <stdio.h>

int gcd(int x, int y)
{
    if (y != 0)
    {
        return gcd(y, x % y);
    }
    else
    {
        return x;
    }
}

int main()
{
    int a, b;
    printf("\nEnter two number: ");
    scanf("%d %d", &a, &b);
    printf("\nGCD of %d and %d is %d", a, b, gcd(a, b));
    return 0;
}