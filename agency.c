#include<stdio.h>
#include<string.h>

typedef struct agency
{
    char name[15];
    int lis;
    char route[20];
    float dis;
}std;

int main()
{
    int n, i;
    std e[50];
    printf("\nEnter the number of drivers: ");
    scanf("%d", &n);
    printf("\nGive your details below:\n");
    for (i=1;i<=n;i++)
    {
        printf("\n %d driver:", i);
        printf("\nName: ");
        scanf("%s", e[i].name);
        printf("\nLicense no: ");
        scanf("%d", &e[i].lis);
        printf("\nRoute: ");
        scanf("%s", &e[i].route);
        printf("\nDistance: ");
        scanf("%f", &e[i].dis);
    }
    printf("\nDetails of all drivers:\n\n");
    for (i=1;i<=n;i++)
    {
        printf("\nName: %s", e[i].name);
        printf("\nLicense no.: %d", e[i].lis);
        printf("\nRoute: %s", e[i].route);
        printf("\ndistance: %.2f\n", e[i].dis);
    }
    return 0;
}
