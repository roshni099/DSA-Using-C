#include <stdio.h>
struct marks
{
    int sub[3];
    int total;
};
int main()
{
    int i, j;
    struct marks student[3] = {45, 67, 81, 0, 75, 53, 89, 0, 57, 36, 71, 0};

    struct marks total;

    for (i = 0; i <=2; i++)
    {
        for (j = 0; j <=2; j++)
        {
            student[i].total += student[i].sub[j];
            total.sub[j] += student[i].sub[j];
        }
        total.total += student[i].total ;
    }
    printf("\nSTUDENT   TOTAL\n\n");
    for (i = 0; i <=2; i++)
    {
        printf("\nStudent[%d]   %d\n", i + 1, student[i].total);
    }
    printf("\n\n");
    printf("\nSUBJECT   TOTAL\n\n");
    for (j = 0; j <=2; j++)
    {
        printf("\nsubject[%d]   %d\n", j + 1, total.sub[j]);
    }
    printf("\n");
    printf("\nGrand total = %d", total.total);
    return 0;
}