#include<stdio.h>

int main()
{
    int a=10;
    int *ptr=NULL;
    int b=34;
    if (ptr!=NULL)
    printf("\nThe value of a is %d", *ptr);
    else 
    printf("\nThe pointer is a NULL pointer and cannot be derefenced.");
    return 0;
}