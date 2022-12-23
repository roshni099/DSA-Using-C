#include <stdio.h>
int main()
{
    int n, i, j;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the value of :\n");
    for (i = 0; i < n; i++)
    {
        printf("[%d]Element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int count;
    int fr[n];
    for (i = 0; i < n; i++)
    {
        count=1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                fr[j] = 0;
            }
        }
        if (fr[i] != 0)
        {
            fr[i] = count;
        }
    }

    printf("\nFrequency of all elements of array : \n");
    for (i = 0; i < n; i++)
    {
        if (fr[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], fr[i]);
        }
    }

    return 0;
}