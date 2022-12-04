#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
/*
just thinking 🤔
two veriables one for com and one for user to get choice or store choice 
if else to add points according to the user choice and computer's choice

*/
int randomNum()
{
    int a;
    srand(time(NULL));
    a = rand() % 3;
    return a;
}
int countPoints(int a, int b)
{
    int c;
    if (a == 1 && (b == 2 || b == 3))
    {
        if (b == 2)
        {
            return c = 1;
        }
        else
        {
            return c = 0;
        }
    }
    else if (a == 2 && (b == 1 || b == 3))
    {
        if (b == 3)
        {
            return c = 1;
        }
        else
        {
            return c = 0;
        }
    }
    else if (a == 3 && (b == 1 || b == 2))
    {
        if (b == 1)
        {
            return c = 1;
        }
        else
        {
            return c = 0;
        }
    }
    else
    {
        return c = 2;
    }
}
int main()
{
    int computer;
    int user = 0;
    int u = 0;
    int c = 0;
    char name[20];
    char again;

    printf("     ~~This is created by Mehboob~~\nIf You have any problem contact me through this \nMail : mehboobmirza69@gmail.com \n");
    printf("\nHow to play this Game 🎯 : \n 1.There are three rounds.Every round gives 1 point to one player (you or computer)");
    //gotoxy (7,0);
    printf("\n\tOr");
    printf("\n If the use and computer's choice is same than it's a draw .\n 2.The winners is who has more points than the other.");
    printf(" \n\nPlease Enter Your Name : ");
    gets(name);
play:
    printf("\n\n    Press any key to Start the Game\n");
    getch();
    clrscr();
    for (int i = 0; i < 3; i++)
    {
        printf("\n   ~~ Round No.%d ~~\n ", i + 1);
        printf("\n 1. Paper \n 2. Scissor \n 3. Rock \n");
        printf("\n • Your turn •");
        printf("\nYour Choose (1 to 3) : ");
        scanf("%d", &user);
        //user = getch();

        printf("\n\n • Computer's turn •");
        computer = randomNum() + 1;
        printf("\nComputer's Choose (1 to 3) : %d\n", computer);
        printf("\nYou choose %d and computer choose %d", user, computer);
        int p = countPoints(user, computer);
        if (p == 0)
        {
            u++;
        }
        else if (p == 1)
        {
            c++;
        }
        else
        {
            printf("\n  IT's a DRAW");
        }
        printf("\n      ~~Points~~ \n User : %d\n Computer : %d", u, c);

        printf("\n\n    Press any key to CONTINUE the Game\n");
        getchar();
        getch();

        clrscr();
    }
    gotoxy(10, 5);
    printf("Results :");
    if (u > c)
    {
        printf(" The Winner is \n\n\t\t |~~%s~~|", name);
    }
    else if (c > u)
    {
        printf(" The Winner is \n\n\t\t |~~Computer~~|");
    }
    else
    {
        printf(" It's a Draw");
    }
    gotoxy(20, 9);
    printf("THANKS 👍🏻");
    printf("\n\n Enter 1 for play again and 0 for exit : ");
    //getch();
    again = getch();
    if (again == '1')
    {
        goto play;
    }
    else
    {
        goto exit;
    }
exit:
    return 0;
}