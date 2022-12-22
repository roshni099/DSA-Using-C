#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *atr, *btr, *ctr;
    int a, b, c;

    emp1:
    printf("\nEnter the no. of characters in your ID: ");
    scanf("%d", &a);
    atr = (char*) malloc(a*sizeof(char));
    printf("\nEnter the ID of first Employee: ");
    for (int i=0;i<a+1;i++)
    {
        scanf("%c", &atr[i]);
    }
    emp2:
    printf("\nEnter the no. of characters in your ID: ");
    scanf("%d", &b);
    btr = (char*) malloc(b*sizeof(char));
    printf("\nEnter the ID of first Employee: ");
    for (int i=0;i<b+1;i++)
    {
        scanf("%c", &btr[i]);
    }
    emp3:
    printf("\nEnter the no. of characters in your ID: ");
    scanf("%d", &c);
    ctr = (char*) malloc(c*sizeof(char));
    printf("\nEnter the ID of first Employee: ");
    for (int i=0;i<c+1;i++)
    {
        scanf("%c", &ctr[i]);
    }
    printf("\nThe ID of the first employee is: ");
    for (int i=0;i<a+1;i++)
    {
        printf("%c", atr[i]);
    }
    printf("\nThe ID of the second employee is: ");
    for (int i=0;i<a+1;i++)
    {
        printf("%c", btr[i]);
    }
    printf("\nThe ID of the third employee is: ");
    for (int i=0;i<a+1;i++)
    {
        printf("%c", ctr[i]);
    }
    
    return 0;
}