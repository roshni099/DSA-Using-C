#include<stdio.h>
#include<string.h>
struct student
{
    char name[25];
    int id;
    float marks;
}s1, s2, s3;

int main()
{
    printf("\nEnter Name , ID, marks of s1: ");
    scanf("%s %d %f", s1.name, &s1.id, &s1.marks);
    printf("\nEnter Name , ID, marks of s2: ");
    scanf("%s %d %f", s2.name, &s2.id, &s2.marks);
    printf("\nEnter Name , ID, marks of s3: ");
    scanf("%s %d %f", s3.name, &s3.id, &s3.marks);
    printf("\ns1:\nName: %s\nID: %d\nMarsk: %f", s1.name, s1.id, s1.marks);
    printf("\n\ns2:\nName: %s\nID: %d\nMarsk: %f", s2.name, s2.id, s2.marks);
    printf("\n\ns3:\nName: %s\nID: %d\nMarsk: %f", s3.name, s3.id, s3.marks);
    return 0;
}