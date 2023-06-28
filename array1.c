#include<stdio.h>

void deletearr(int n, int arr[])
{
    int index;
    printf("\nEnter the index number you want to delete: ");
    scanf("%d", &index);
    for ( int i=index;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n=n-1;
    for ( int i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
}

void search(int n,int arr[])
{
    int x;
    int ch;
    printf("\nEnter:\n1.If you want to search by value .\n2.If you want to search by index.");
    printf("\nPRESS A BUTTON: ");
    scanf("%d", &ch);
    switch(ch)
    {
        case 1:
        {
            int pos=0;
            printf("\nEnter the value you want to search: ");
            scanf("%d", &x);
            for (int i=0; i<n;i++)
            {
                if (x==arr[i])
                {
                    printf("\nThe given element is present at position %d", i);
                    pos=1;
                    break;
                }
            }
            if(pos==0)
            {
                printf("\nThe given element is not present.");
            }
            break;
        }
        case 2:
        {
            printf("\nEnter the index you want to search: ");
            scanf("%d", &x);
            if (x>=n)
            {
                printf("\nInvalid Index.");
            }
            else
            {
                printf("\nThe value present at the given index is %d", arr[x]);
            }
            break;
        }
        default:
        {
            printf("\nINVALID NUMBER.");
        }
    }
}

void display(int n, int arr[])
{
    for (int i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
}

void update(int n, int arr[])
{
    int up, ind;
    printf("\nEnter the index number and value to update: ");
    scanf("%d %d", &ind, &up);
    if (ind>n)
    {
        printf("\nUpdation not possible because of invalid number.");
    }
    else
    {
        arr[ind]=up;
        display(n, arr);
    }
}
int main()
{
    int n;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &n);
    int arr[n];
    printf("Now enter the value of : \n");
    for (int i=0; i<n; i++)
    {
        printf("Element[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("The Given array is as follows: \n");
    display(n, arr);
    deletearr(n, arr);
    n=n-1;
    search(n, arr);
    update(n, arr);
}