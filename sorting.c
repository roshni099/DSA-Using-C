#include <stdio.h>
#include <stdlib.h>

struct marks
{
    int sub[3];
    int total;
};

int main()
{
    struct marks student[3] = {45, 67, 81, 0, 75, 53, 69, 0, 57, 36, 71, 0};
    struct marks total;
    int i, j;

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            student[i].total = student[i].total + student[i].sub[j];
            total.sub[j] = total.sub[j] + student[j].sub[i];
        }
        total.total += student[i].total;
    }
    printf("\nSTUDENT     TOTAL\n\n");

    for (i = 0; i <= 2; i++)
    {
        printf("Student[%d]     %d\n", i + 1, student[i].total);
    }
    printf("\nSUBJECT     TOTAL\n\n");
    for (j = 0; j <= 2; j++)
    {
        printf("Subject-%d     %d\n", j + 1, total.sub[j]);
    }
    printf("\nGrand Total  =  %d\n", total.total);
}