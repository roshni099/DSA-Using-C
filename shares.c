#include<stdio.h>

int main()
{
    int n;
    printf("\nEnter the no. of prices: ");
    scanf("%d", &n);
    printf("\nEnter the stock prices throughout the day: \n");
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf("\nPrice[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nStrock Prices through out the day are: \n");
    for (int i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }

    int lock=0, profit=0, buy, sell, count=0;
    for(int i=0;i<n;i++)
    {
        if (count == 2)
        {
            break;
        }
        if (lock==0)
        {
            if(arr[i]<arr[i+1])
            {
                buy=arr[i];
                printf("\nBuy: %d", buy);
                lock=1;
            }
        }
        else if(lock==1)
        {
            if(count==1)
            {
                int max=arr[i+1];
                for(int j=i+1; j<n;j++)
                {
                    if(arr[j]>max)
                    {
                        max=arr[j];
                    }
                }
                sell=max;
                printf("\nSell: %d", sell);
                int x=sell-buy;
                printf("\nProfit: %d", x);
                profit+=x;
                count++;
                lock=0;
            }
            else if(arr[i+1]<arr[i])
            {
                sell=arr[i];
                printf("\nSell: %d", sell);
                lock=0;
                int x=sell-buy;
                profit+=x;
                printf("\nProfit: %d", x);
                count++;
            }
        }
    }

    printf("\nThe maximum profit from the given stock prices will be: %d", profit);
}