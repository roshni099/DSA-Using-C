#include <stdio.h>

float gpay(float x)
{
    float hr, da, t;
    hr = (0.25) * (float)x;
    da = (0.75) * (float)x;
    t = x + hr + da;
    return t;
}

typedef struct employee
{
    char name[20];
    char gender[10];
    char desig[50];
    char depart[20];
    float pay;
} emp;

int main()
{
    int n, i;
    printf("\nEnter the number of employees: ");
    scanf("%d", &n);
    emp e[n];

    printf("\nEnter your Details below: ");
    for (i = 0; i < n; i++)
    {
        printf("\n\n%d Employee:\n", i + 1);
        printf("\nEnter your name: ");
        scanf("%s", e[i].name);
        printf("\nChoose gender from 'Male' and 'Female': ");
        scanf("%s", e[i].gender);
        printf("\nEnter your Designation: ");
        scanf("%s", e[i].desig);
        printf("\nEnter your department: ");
        scanf("%s", e[i].depart);
        printf("\nEnter your Basic Salary: ");
        scanf("%f", &e[i].pay);
    }

    printf("\n**********ALL EMPLOYEES DETAILS**********\n");
    for (i = 0; i < n; i++)
    {
        printf("\n%d EMPLOYEE: \n", i + 1);
        printf("\nName: %s", e[i].name);
        printf("\nGender: %s", e[i].gender);
        printf("\nDesignation: %s", e[i].desig);
        printf("\nDepartment: %s", e[i].depart);
        printf("\nBasic Salary: %f", e[i].pay);
        int x=e[i].pay;
        printf("\nGross Salary: %f", gpay(x));
    }

    return 0;
}