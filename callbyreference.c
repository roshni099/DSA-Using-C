#include<stdio.h>

void addsub(int *a, int *b)
{
    int x, y;
    x = *a+*b;
    y = *a-*b;
    *a = x;
    *b = y;
}

int main()
{
    int a, b;
    printf("\nEnter two number for addition and subtraction: ");
    scanf("%d %d", &a, &b);
    addsub(&a, &b);
    printf("\nNow the value of a and b is %d and %d.", a, b);
    return 0;
}