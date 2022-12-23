#include<stdio.h>

struct original
{
    int num;
};

struct number
{
    int u;
    int d;
    int h;
    int t;
    int tt;
};

struct new
{
    int real;
};

int main()
{
    struct original n;
    struct number a;
    struct new x;
    printf("\nEnter a number of upto 5 digits: ");
    scanf("%d", &n.num);

    a.u = n.num%10;
    n.num=n.num/10;

    a.d = n.num%10;
    n.num=n.num/10;

    a.h=n.num%10;
    n.num=n.num/10;

    a.t=n.num%10;
    n.num=n.num/10;

    a.tt=n.num%10;
    n.num=n.num/10;

    printf("\nFrom the given number:\n");
    printf("\nUnit: %d", a.u);
    printf("\nTenth: %d", a.d);
    printf("\nHundredth: %d", a.h);
    printf("\nThousandth: %d", a.t);
    printf("\nTen Thousandth: %d", a.tt);

    x.real=((a.tt*10000)+(a.t*1000)+(a.h*100)+(a.d*10)+(a.u*1));

    printf("\n\nThe real number is: %d", x.real);

    return 0;

}