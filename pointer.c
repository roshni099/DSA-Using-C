#include<stdio.h>
int main()
{
    char a= '2';
    char *ptra=&a;
    printf("%d", ptra);
    printf("\n%d", ptra+1);
    printf("\n%c", *ptra);
    printf("\n%c", a);
    return 0;

}