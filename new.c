#include<stdio.h>
#include<math.h>
int a, b, c, s;
char ch;
float area(int x, int y, int z)
{
    
    s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("\nThe area of the triangle is = %f", area);
    return (area);
}
float perimeter(int x, int y, int z)
{
   
   float perimeter = a + b + c;
    printf("\nthe perimeter of the triangle is = %f", perimeter);
    return (perimeter);
}

int main()
{
    printf("Enter the sides of triangle :\n");
    scanf("%d %d %d", &a, &b, &c);
    getchar();

    printf("Enter the choice : ");
    scanf("%c", &ch);
    switch (ch)
    {
    case '1':
        perimeter(a, b, c);
        break;
        case '2':
            area(a, b, c);
            break;
        
        default:
            printf("\nenter valid option\n");
        }
        return 0;
}