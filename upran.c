#include<stdio.h>

void printarray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
}

void update(int l, int r, int x, int arr[])
{
    for (int i=l; i<=r; i++)
    {
        arr[i]+=x;
    }
}

int main()
{
    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the value of: \n");
    for (int i=0;i<n;i++)
    {
        printf("\nElement[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    int ch;
    while(1)
    {
        printf("\nEnter :\n1.For updation.\n2.For printing the array.\n3.For Exit.");
        printf("\n\nPRESS A BUTTON: ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            {
                int l, r, x;
                printf("\nEnter the starting and the ending index value along with the adding value: ");
                scanf("%d %d %d", &l, &r, &x);
                update(l,r,x,arr);
                break;
            }
            case 2:
            {
                printf("\nThe Array: \n");
                printarray(arr, n);
                break;
            }
            case 3:
            {
                printf("\n\nExiting...");
                goto news;
                break;
            }
            default:
            {
                printf("\nINVALID INPUT.");
            }
        }
    }
    news:
    printf("\n\nEXITED");
    return 0;
}