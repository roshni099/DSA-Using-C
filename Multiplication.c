//Print multiplication table of a number entered by the user.
#include<stdio.h>
int mul(int a)
{
    int i;
    for (i=1;i<11;i++)
    {
        printf("\n%d * %d = %d", a, i, a*i);
    }
}
int main()
{
    int a, i, c;
    printf("\nEnter a number: ");
    scanf("%d", &a);
    printf("\nTable of %d:\n", a);
    c=mul(a);
    return 0;
}