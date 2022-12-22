#include<stdio.h>
//for kilometer to miles
void kilo()
{
    float a, y;
    printf("\nEnter the distance: ");
    scanf("%f", &y);
    a=(float)0.6214*y;
    printf("\nConverted value is %f mi", a);
    main();
}
//for inches to foot
void inch()
{
    float a, y;
    printf("\nEnter the distance: ");
    scanf("%f", &y);
    a=(float)0.08333*y;
    printf("\nConverted value is %f ft", a);
    main();
}
//for centimeter to inches
void cms()
{
    float a, y;
    printf("\nEnter the distance: ");
    scanf("%f", &y);
    a=(float)0.3937*y;
    printf("\nConverted value is %f in", a);
    main();
}
//for pound to kgs
void pon()
{
    float a, y;
    printf("\nEnter the weight: ");
    scanf("%f", &y);
    a=(float)0.4535*y;
    printf("\nConverted value is %f kg", a);
    main();
}
//for inches to meters
void met()
{
    float a, y;
    printf("\nEnter the distance: ");
    scanf("%f", &y);
    a=(float)0.0254*y;
    printf("\nConverted value is %f m", a);
    main();
}
//for kgs to pound
void kgs()
{
    float a, y;
    printf("\nEnter the weight: ");
    scanf("%f", &y);
    a=(float)2.2046*y;
    printf("\nThe converted value is %f lb", a);
    main();
}
int main()
{
    int x;
    printf("\n\nConversion\n");
    printf("Press 1 for Kms to Miles\n");
    printf("Press 2 for Inches to Foot\n");
    printf("Press 3 for Cms to inches\n");
    printf("Press 4 for Pounds to Kgs\n");
    printf("Press 5 foe Inches to Meter\n");
    printf("Press 6 for kgs to pound\n");
    printf("Press 0 to exit\n");
    start:
    {
    printf("\nPress a number: ");
    }
    scanf("%d", &x);
    if (x==1)
    {
        kilo();
    }
    else if (x==2)
    {

       inch();
    }
    else if (x==3)
    {
        cms();
    }
    else if (x==4)
    {
        pon();
    }
    else if (x==5)
    {
        met();
    }
    else if (x==6)
    {
        kgs();
    }
    else if (x==0)
    {
        goto end;
    }
    else
    {
        printf("\nERROR, PLEASE ENTER A VALID NUMBER!");
        goto start;
    }
    end:
    {
        return 0;
    }
}