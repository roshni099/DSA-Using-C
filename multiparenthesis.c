#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    char *s;
};

void create(struct stack *st)
{
    printf("\nEnter the size of the stack: ");
    scanf("%d", &st->size);
    st->top = -1;
    st->s = (char *)malloc(st->size * sizeof(char));
}

void isFULL(struct stack st)
{
    if (st.top > st.size - 1)
    {
        printf("\nThe stack is FULL.\n");
    }
    else
    {
        printf("\nThe stack is NOT EMPTY.\n");
    }
}

int isEmpty(struct stack *st)
{
    if (st->top == -1)
    {
        printf("\nThe stack is EMPTY.\n");
        return 1;
    }
    else
    {
        printf("\nThe stack is NOT EMPTY.\n");
        return 0;
    }
}

void push(struct stack *st, char val)
{
    if (st->top == st->size - 1)
    {
        printf("\nStack overflow.\n");
    }
    else
    {
        st->top++;
        st->s[st->top] = val;
    }
}

char pop(struct stack *st)
{
    char x = '\0';
    if (st->top == -1)
    {
        printf("\nStack Underflow.\n");
    }
    else
    {
        x = st->s[st->top--];
    }
    printf("\nThe poped element is %c\n", x);
    return x;
}

void display(struct stack st)
{
    int i;
    for (i = st.top; i >= 0; i--)
    {
        printf("%c\t", st.s[i]);
    }
}

int match(char a, char b)
{
    if (a == '(' && b == ')')
    {
        return 1;
    }
    if (a == '[' && b == ']')
    {
        return 1;
    }
    if (a == '{' && b == '}')
    {
        return 1;
    }
    return 0;
}

int parenthesis(char *exp)
{
    struct stack *st;
    char popp;
    st->top = -1;
    st->size = 100;
    st->s = (char *)malloc(st->size * sizeof(char));
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            push(st, exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            if (isEmpty(st))
            {
                return 0;
            }
            popp = pop(st);
            if (!match(popp, exp[i]))
            {
                return 0;
            }
        }
    }

    if (st->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char *exp = "[4-6]((8){(9-8)}";

   
    if (parenthesis(exp))
    {
        printf("The parenthesis is balanced");
    }
    else
    {
        printf("The parenthesis is not balanced");
    }

    char *p=(char*)malloc(150*sizeof(char));
    printf("\nEnter the expression you want to check if it's balanced: ");
    scanf(" %s",&p);
    int s=parenthesis(p);
    if (s)
    {
        printf("The parenthesis is balanced");
    }
    else
    {
        printf("The parenthesis is not balanced");
    }


    return 0;
}