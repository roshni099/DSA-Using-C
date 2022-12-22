#include<stdio.h>
int main()
{
    FILE *ptr=NULL;
    char str[34] = "Roshni is a good girl.";
    char a[40] = "She is a pretty girl";
    ptr = fopen("text.txt", "a");
    fprintf(ptr, "\n%s\n%s", str, a);
    return 0;
}