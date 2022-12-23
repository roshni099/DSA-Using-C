#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to check if it's a palindrome.
void palindrome(char name[])
{
    int l = 0, u, x;
    u = strlen(name) - 1;
    for (int i = 0; i < u; i++)
    {
        if (name[l++] != name[u--])
        {
            x = 1;
            break;
        }
    }
    if (x == 1)
    {
        printf("\n%s is a NOT Palindrome.", name);
    }
    else
    {
        printf("\n%s is a Palindrome.", name);
    }
}

int main()
{
    char arr[30], *name;
    printf("\nEnter a word to check if it's palindrome or not: ");
    scanf("%s", arr);

    name = (char *)malloc((strlen(arr) + 1) * sizeof(char));
    strcpy(name, arr);

    palindrome(name);
    return 0;
}