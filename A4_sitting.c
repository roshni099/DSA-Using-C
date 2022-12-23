#include <stdio.h>
int main()
{
    int n, i;
    printf("\nEnter total number of seats: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        arr[i] = 0;
    }
    int p;
    while (p != 2)
    {
        printf("\nPress 1: For booking the seats\nPress 2: For Exit.\n");
        scanf("%d", &p);
        int seat, count = 0, x;
        switch (p)
        {
        case 1:
        {
            printf("\n1 is OCCUPIED & 0 is for VACANT.\n");
            for (i = 0; i < n; i++)
            {
                printf("%d\t", arr[i]);
            }
            printf("\n");
            for (i = 0; i < n; i++)
            {
                printf("%d\t", i + 1);
            }
            printf("\nEnter the number of seats you want to book: ");
            scanf("%d", &x);

            for (i = 0; i < n; i++)
            {
                if (arr[i] == 0)
                {
                    count++;
                }
            }
            if (x > count)
            {
                printf("\n%d number of seats are NOT available. ", x);
                break;
            }
            else
            {
                printf("\nEnter seat numbers for booking below. \n");
                for (i = 0; i < x; i++)
                {
                    printf("\n[%d]Seat number: ", i+1);
                    scanf("%d", &seat);
                    if (arr[seat-1]==1)
                    {
                        printf("\nSeat already OCCUPIED.");
                    }
                    else
                    {
                        arr[seat-1]=1;
                    }
                }
            }
            printf("\n\n");
            printf("\nBooking Complete.\n");
            printf("\n\nSEATS AVAILABLE:\n");
            for (i=0;i<n;i++)
            {
                printf("%d\t", arr[i]);
            }
            printf("\n");
            for (i=0;i<n;i++)
            {
                printf("%d\t", i+1);
            }
        }
        case 2:
        {
            break;
        }
        default:
        {
            printf("\nInvalid Choice.Press AGAIN.");
        }

        }
    }
    printf("\nEXITED.");

    return 0;
}