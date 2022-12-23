#include <stdio.h>
#include <stdlib.h>

//Function for sum and average.
void sumavg(int *arr, int n)
{
    int sum=0, i;
    float avg;
    for (i=0;i<n;i++)
    {
        sum += arr[i];
    }
    avg = (float)sum/n;
    printf("\nSum of all the elements is %d", sum);
    printf("\nAverage of all the elements is %.2f", avg);

}

//Function for minimum and maximum.
void minmax(int *arr, int n)
{
    int min = 0, max = 0, i;
    min = max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("\nMinimum element of the array is %d", min);
    printf("\nMaximum element of the array is %d", max);
}

int main()
{
    int i, n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("\n%d Element: ", i + 1);
        scanf("%d", &a[i]);
    }
    minmax(a, n);
    sumavg(a, n);
    return 0;
}