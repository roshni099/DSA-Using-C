#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char comp()
{
    int a;
    a = rand() % 3;
    return a;
}

int main()
{
    char name[50];
    int num, i, a, p = 0, c = 0;
    printf("\n\n                **************************ROCK, PAPER & SCISSORS**************************");
    printf("\nRULES:\na> Press 0 for Rock.\nb> Press 1 for Paper\nc> Press 2 for Scissors");
    printf("\n\nNOTE: There will be 3 rounds. Person who wins most of the rounds will be the winner.");

    printf("\n\n                                             TO START THE GAME \n\n");
    printf("Enter your name: ");
    scanf("%[^\n]", &name);
    getchar();

    printf("\nYour name is %s", name);

    play:
    for (i = 0; i < 3; i++)
    {
        printf("\n\n\n%d ROUND:", i + 1);
        printf("\n\n%s's turn: ", name);
        scanf("%d", &num);
        if (num == 0)
        {
            printf("Rock");
        }
        else if (num == 1)
        {
            printf("Paper");
        }
        else if (num == 2)
        {
            printf("Scissors");
        }
        printf("\nComputer's turn: ");
        a = comp();
        if (a == 0)
        {
            printf("Rock");
        }
        else if (a == 1)
        {
            printf("Paper");
        }
        else if (a == 2)
        {
            printf("Scissors");
        }
        if (num == a)
        {
            printf("\n\nTIE");
        }
        else if (num == 0 && a == 1)
        {
            c++;
            printf("\n\nCOMPUTER WINS");
        }
        else if (num == 1 && a == 0)
        {
            p++;
            printf("\n\n%s WINS", name);
        }
        else if (num == 1 && a == 2)
        {
            c++;
            printf("\n\nCOMPUTER WINS");
        }
        else if (num == 2 && a == 1)
        {
            p++;
            printf("\n\n%s WINS", name);
        }
        else if (num == 0 && a == 2)
        {
            p++;
            printf("\n\n%s WINS", name);
        }
        else if (num == 2 && a == 0)
        {
            c++;
            printf("\n\nCOMPUTER WINS");
        }
    }
    printf("\n\n                         *********************FINAL SCORE BOARD*********************");
    printf("\n\n%s WINS : %d TIMES\nCOMPUTER WINS: %d TIMES", name, p, c);

    printf("\nFINAL RESULT:");

    if (p>c)
    {
        printf("\n\n                                             %s WINS THE GAME\n");
    }
    else if (c>p)
    {
        printf("\n\n                                             COMPUTER WINS THE GAME\n");
    }
    else if (p==c)
    {
        printf("\n\n                                             TIE , PLAY AGAIN\n");
        goto play;
    }

    return 0;
}