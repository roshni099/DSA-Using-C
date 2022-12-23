#include <stdio.h>
#include <math.h>

//Structure for co-ordinates x and y.
typedef struct point
{
    int x, y;
}st;

int main()
{
    st point[3];
    float sumx[3], sumy[3], dis[3], s, a;
    int i;
    float area;

    printf("\nEnter the Co-ordinates of 3 points: \n");
    for (i = 0; i < 3; i++)
    {
        printf("\n%dst POINT: ", i + 1);
        scanf("%d %d", &point[i].x, &point[i].y);
    }

    for (i = 0; i < 2; i++)
    {
        sumx[i] = point[i + 1].x - point[i].x;
        sumy[i] = point[i + 1].y - point[i].y;
    }
    sumx[2] = point[0].x - point[2].x;
    sumy[2] = point[0].y - point[2].y;
    for (i = 0; i < 2; i++)
    {
        dis[i] = sqrt((sumx[i] * sumx[i]) + (sumy[i] * sumy[i]));
    }
    dis[2] = sqrt((sumx[2] * sumx[2]) + (sumy[2] * sumy[2]));
    printf("\nDistance between 1st and 2nd point is %.2f", dis[0]);
    printf("\nDistance between 2nd and 3rd point is %.2f", dis[1]);
    printf("\nDistance between 3rd and 1st point is %.2f", dis[2]);

    for (i = 0; i < 3; i++)
    {
        a += dis[i];
    }
    s = a / 2;

    area = sqrt(s * (s - dis[0]) * (s - dis[1]) * (s - dis[2]));

    printf("\nArea of the triangle will be: %.2f", area);

    return 0;
}