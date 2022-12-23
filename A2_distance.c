#include <stdio.h>

typedef struct distance
{
    int km, m;
} dist;

void distance(dist x, dist y)
{
   dist d3;
   d3.km=x.km+y.km;
   d3.m=x.m+y.m;
   d3.km = d3.km+d3.m/1000;
   d3.m=d3.m%1000;
   printf("\nTotal distance is %dkm %dm", d3.km, d3.m);
}

int main()
{
    dist a, b;
    printf("\nEnter your distance for addition in format \"xx yy\", first for Km and second for M.\n");
    printf("\nEnter the first distance: ");
    scanf("%d %d", &a.km, &a.m);
    printf("\nEnter the second distance: ");
    scanf("%d %d", &b.km, &b.m);
    distance(a,b);

    return 0;
}