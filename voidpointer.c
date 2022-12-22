#include<stdio.h>
int main()
{
    int x=10;
    float y=50.4;
    char z='r';
    void *ptr;
    ptr = &x;
    printf("\nThe value of x is %d", *(int*)ptr);
    ptr = &y;
    printf("\nThe value of y is %f", *(float*)ptr);
    ptr = &z;
    printf("\nThe value of z is %c", *(char*)ptr);
    return 0;
}