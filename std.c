#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    char name[20];
    int roll;
    float marks[5], total;
} std;
int main()
{
    std ramanuj[100];
    int i, n, j;

    printf("Enter the no. of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("name : ");
        scanf("%s", ramanuj[i].name);
        printf("roll number = ");
        scanf("%d", &ramanuj[i].roll);
        for (j = 0; j < 5; j++)
        {
            printf("Enter marks of %d subject = \n", j+1);
            scanf("%f", &ramanuj[i].marks[j]);
        }
        printf("\n");
        ramanuj[i].total = 0;
        for (j = 0; j < 5; j++)
        {
            printf("marks[%d] = %f\n", j+1, ramanuj[i].marks[j]);
            ramanuj[i].total += ramanuj[i].marks[j];
        }
        printf("Total marks = %.2f\n", ramanuj[i].total);
        printf("Percentage = %.2f\n", ramanuj[i].total / 5.0);
    }

    printf("\nEnter the roll no. to see the details and if you don't want to see any detail press 0: \n");
    for (i=0;i<n;i++)
    {
        printf("Name = %s, Roll = %d\n", ramanuj[i].name, ramanuj[i].roll);
        
    }


    return 0;
}
