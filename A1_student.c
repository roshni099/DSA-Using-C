#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Structure to store the details.
typedef struct student
{
    char name[20];
    int roll;
    float marks[5];
    char add[50];
    float total;
} std;
int main()
{
    std student[5];
    int i, j;
    printf("\nEnter Details: \n");
    for (i = 0; i < 5; i++)
    {
        printf("\n%dst STUDENT", i + 1);
        printf("\nName: ");
        scanf("%s", student[i].name);
        printf("\nRoll No. : ");
        scanf("%d", &student[i].roll);
        printf("\nEnter Your marks out of 100:");
        for (j = 0; j < 5; j++)
        {
            printf("\nMarks of %d subject: ", j + 1);
            scanf("%f", &student[i].marks[j]);
        }
        student[i].total = 0;
        for (j = 0; j < 5; j++)
        {
            student[i].total += student[i].marks[j];
        }
        printf("\nAddress: ");
        scanf("%s", &student[i].add);
    }

    printf("\nSTUDENTS DETAIL: \n");
    for (i = 0; i < 5; i++)
    {
        printf("\n%dst Student details ", i + 1);
        printf("\nName: %s", student[i].name);
        printf("\nRoll no.: %d", student[i].roll);
        printf("\nTotal marks: %f/500", student[i].total);
        printf("\nAddress: %s\n", student[i].add);
    }
    return 0;
}