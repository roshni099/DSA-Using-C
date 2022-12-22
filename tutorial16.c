#include<stdio.h>
int main()
{
    int a, b, even=0, odd=0;
    printf("\nEnter range: ");
    scanf("%d %d", &a, &b);
    for (int i=a; i<b; ++i)
    {
        if (i%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    printf("\nTotal number of even number is %d and odd numbers is %d in the range %d - %d", even, odd, a, b);
    return 0;
}