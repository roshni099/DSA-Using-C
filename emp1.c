#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *ptr, c, i=0;

    while(i<3)
    {
        printf("\n\nEmployee %d:\nEnter the size of the character: ", i+1);
        scanf("%d", &c);

        ptr = (char*) malloc((c+1)*sizeof(char));
        printf("\nEnter your Employee ID: ");
        scanf("%s", ptr);
        printf("\nYour employee Id is %s", ptr);
        i=i+1;
    }
    
    return 0;
}