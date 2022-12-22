#include<stdio.h>
int main()
{
    int i=0, num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    do
    {
        i=i+1;
        printf("\nSo i is %d", i);
    } while (i<num);
    return 0;
    
}