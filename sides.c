#include <stdio.h>
#include<math.h>

float peri(float x, float y, float z)
{
    float p;
    p = x+y+z;
    return p;
}

float area(float x, float y, float z)
{
    float s, ar;
    s = (x+y+z)/2.0;
    ar=sqrt(s*(s-x)*(s-y)*(s-z));
    return ar;
}

int main()
{
    float a, b, c;
    int press;
    printf("\nEnter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("\nPress any one button as per your wish to display:");
choose:
{
    printf("\n1 - Perimeter\n2 - Area\n");
}
    scanf("%d", &press);

    if (press == 1)
    {
        printf("\nThe perimeter of the triangle is %.2f", peri(a, b, c));
    }
    else if (press == 2)
    {
        printf("\nThe area of the triangle is %.2f", area(a, b, c));
    }
    else
    {
        printf("\nENTERED INVALID OPTION \nChoose again: ");
        goto choose;
    }
    return 0;
}