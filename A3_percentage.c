#include <stdio.h>

//Function to find the percentage.
float percent(int n)
{
    static float i = 1.0;
    float p;
    if (i <= 50)
    {
        p = (i / 100.0) * n;
        printf("\n%d percent: %.2f %%", (int)i, p);
        i++;
    }
    else
    {
        return 0;
    }
    percent(n);
    return 0;
}

int main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    percent(n);
    return 0;
}