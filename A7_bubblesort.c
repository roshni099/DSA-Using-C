#include<stdio.h>

typedef struct bubble
{
    int date;
    int month;
    int year;
}std;

int main()
{
    int n, i, j;
    int temp, temp1, temp2;
    printf("\nEnter the number of total dates you want to enter: ");
    scanf("%d", &n);

    std date[n];

    for(i=0;i<n;i++)
    {
        printf("\n[%d]Entry: ", i);
        printf("\nDate: ");
        scanf("%d", &date[i].date);
        printf("\nMonth: ");
        scanf("%d", &date[i].month);
        printf("\nYear: ");
        scanf("%d", &date[i].year);
    }

    printf("\nGiven Dates: \n");
    for (i=0;i<n;i++)
    {
        printf("%d / %d / %d\n", date[i].date, date[i].month, date[i].year);
    }

    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if (date[j].year>date[j+1].year)
            {
                temp=date[j].year;
                date[j].year=date[j+1].year;
                date[j+1].year=temp;

                temp1=date[j].month;
                date[j].month=date[j+1].month;
                date[j+1].month=temp1;

                temp2=date[j].date;
                date[j].date=date[j+1].date;
                date[j+1].date=temp2;
            }
        }
    }

    printf("\nSorted Dates: \n");
    for (i=0;i<n;i++)
    {
        printf("%d / %d / %d\n", date[i].date, date[i].month, date[i].year);
    }
    
    return 0;
}