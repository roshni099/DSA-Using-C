#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50], s2[50], s3[50];
    printf("\nEnter name of first friend: ");
    gets(s1);
    printf("Enter relation: ");
    gets(s2);
    printf("Enter the name of second friend: ");
    gets(s3);
    printf("\nThe result is :\n\n");
    strcat(s1, strcat(s2, s3));
    puts(s1);
    return 0;
}