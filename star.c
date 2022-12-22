#include<stdio.h>
//for triangle star pattern.
void tri()
{
    int n, i, j;
    printf("\nEnter the number: ");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        for (j=0;j<i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
//for reverse triangle star pattern.
void rev()
{
    int n, i, j;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        for (j=0;j<n-i;j++)
        {
        printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int a;
    printf("\nPress 0 for trianlge star pattern.\nPress 1 for reverse trianlge star pattern.\nEnter a number: ");
    scanf("%d", &a);
    switch(a)
    {
        case 0:
           tri();
           break;

        case 1:
           rev();
           break;
        default:
            printf("\nENTERED AN INVALID NUMBER");
            goto end;
            break;   
    }
    end:
      return 0;
}
