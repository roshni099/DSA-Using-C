#include <stdio.h>
int pal(int a)
{
    int rev = 0, x;
    x=a;
    while (a != 0)
    {
        rev = rev * 10 + a % 10;
        a = a / 10;
    }
    printf("\nThe reversed number is %d", rev);
    if (rev == x)
    {
        printf("\n\nIt is a Palindrome number.");
    }
    else 
    {
        printf("\n\nIt is NOT a Palindrome number.");
    }
    return 0;
}

int main()
{
    int n;
    printf("\nEnter a number to check whether it's a palindrome number or not: ");
    scanf("%d", &n);
    pal(n);
    return 0;
}