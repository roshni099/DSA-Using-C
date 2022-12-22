#include <stdio.h>

int sum(int a, int b)
{
    return a+b;
}

int main()
{
    int x, y;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("\nThe sum of the two numbers is %d", sum(x, y));
    return 0;
}
