#include<stdio.h>
int main()
{
    char n;
    printf("\nEnter letter (a,b): ");
    scanf("%c", &n);
    switch (n)
    {
        case 'a':
          printf("\nSweet");
          break;
        case 'b':
          printf("\nRude");
          break;
        default:
          printf("\nNothing");
    }
    return 0;
}