#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
int random_info (int from , int to)
{
    return rand() % (to - from + 1) + from;
}
void print_tablue ()
{
    printf ("\t\n\t###################################################################");
    printf ("\n\t\t\t \033[1;36m+++\033[0m \033[1;35mG a m e  O v e r \033[1;36m+++\033[0m\t\t\n");
    printf ("\t###################################################################\n");
}

void rainbow_progress() {
    int colors[] = {31, 32, 33, 34, 35, 36}; 
    int num_colors = 6;
    int n = 30;
    for (int i = 0; i <= n; i++) {
        printf("\r["); 

        for (int j = 0; j < i; j++) {
            printf("\033[1;%dm=\033[0m", colors[j % num_colors]);
        }

        for (int j = i; j < n; j++) {
            printf(" ");
        }

        printf("] %3d%%", (i * 100) / n);

        fflush(stdout);
        usleep(50000); 
    }
    printf("\n");
}
int how_is_the_winner (int me , int os)
{
    if (me == 1 && os == 3)
    {
        return 1 ;
    }
    else if (me == 2 && os == 3)
    {
        return 2;
    }
    else if (me == 3 && os == 3)
    {
        return 0;
    }
    else if (me == 1 && os == 2)
    {
        return 2;
    }
    else if (me == 2 && os == 2)
    {
        return 0;
    }
    else if (me == 3 && os == 2)
    {
        return 1;
    }
    else if (me == 1 && os == 1)
    {
        return 0;
    }
    else if (me == 2 && os == 1)
    {
        return 1;
    }
    else if (me == 3 && os == 1)
    {
        return 2;
    }
}

int print_results (int me , int os, char *player1 , char *player2)
{
    int res = how_is_the_winner(me , os);
    int count = 0 ;
    if (me == 1 && os == 3 && res == 1)
    {
        printf ("%s  choice : hejar \n",player1);
        printf ("%s  choice : mi9as \n",player2);
        printf ("Round Winner : %s \n",player1);
        return res;
    }
    else if (me == 2 && os == 3 && res == 2)
    {
        printf ("%s choice : wara9a \n",player1);
        printf ("%s choice : mi9as \n",player2);
        printf ("Round Winner : %s \n",player2);
        return res;
    }
    else if (me == 3 && os == 3 && res == 0)
    {
        printf ("%s choice : mi9as \n",player1);
        printf ("%s choice : mi9as \n",player2);
        printf ("Round Winner : ta3adol \n");
        return res;
    }
    else if (me == 1 && os == 2 && res == 2)
    {
        printf ("%s choice : hajara \n",player1);
        printf ("%s choice : wara9a \n",player2);
        printf ("Round Winner : %s \n",player2);
        return res ;
    }
    else if (me == 2 && os == 2 && res == 0)
    {
        printf ("%s choice : wara9a \n",player1);
        printf ("%s choice : wara9a \n",player2);
        printf ("Round Winner : ta3adol \n");
        return res;
    }
    else if (me == 3 && os == 2 && res == 1)
    {
        printf ("%s choice : mi9as \n",player1);
        printf ("%s choice : wara9a \n",player2);
        printf ("Round Winner : %s \n",player1);
        return res;
    }
    else if (me == 1 && os == 1 && res == 0)
    {
        printf ("%s choice : hajara \n",player1);
        printf ("%s choice : hajara \n",player2);
        printf ("Round Winner : ta3adol \n");
        return res ;
    }
    else if (me == 2 && os == 1 && res == 1)
    {
        printf ("%s choice : wara9a \n",player1);
        printf ("%s choice : hajara \n",player2);
        printf ("Round Winner : %s \n",player1);
        return res;
    }
    else if (me == 3 && os == 1 && res == 2)
    {
        printf ("%s choice : wara9a \n",player1);
        printf ("%s choice : mi9as \n",player2);
        printf ("Round Winner : %s \n",player2);
        return res ;
    }
}

void game_results (int n, char *player1 , char *player2, int Winner1 , int Winner2 , int ta3adol)
{
    print_tablue();
    printf ("\n\n\t\t-------------- [ Game Results ] -----------------\n");
    printf ("\t\t|\t\tGame rounds : [%d] \t\t|\n",n);
    printf ("\t\t|\t\t%s won tims : [%d] \t\t|\n",player1,Winner1);
    printf ("\t\t|\t\t%s won tims : [%d] \t\t|\n",player2,Winner2);
    printf ("\t\t|\t\tDraw time   : [%d] \t\t|\n",ta3adol);
    printf ("\t\t-------------------------------------------------\n");
    

}

void round_ate (int n , char *player1,char *player2)
{
    int i = 0;
    int me;
    int os ;
    int Winner1 = 0, Winner2 = 0 , ta3adol = 0;
    int res ;
    rainbow_progress();
    system("clear");
    while (i < n)
    {
        printf ("\n\t\t\t\033[1;33mRound [%d] begins\033[0m : ",i + 1);
        printf ("\nyour choice : \033[1;32m[1]:hajar | \033[1;34m[2]:wara9 | \033[1;35m[3]:mi9as \033[0m ? ");
        scanf ("%d",&me);
        os = random_info(1,3);
        res = print_results(me,os,player1,player2);
        if (res == 1)
        {
            Winner1++;
        }
        else if (res == 2)
        {
            Winner2++;
        }
        else if (res == 0)
        {
            ta3adol++;
        }
        i++;
    }
    printf ("\n");
    rainbow_progress();
    game_results(n,player1,player2,Winner1,Winner2,ta3adol);
}

void star_game ( char *player1 , char *player2)
{
    char yes[2];
    int n ;
    do
    {
        printf ("how many Round 1 to 10 ? ");
        scanf ("%d",&n);
        printf ("enter name of player  1 : ");
        scanf ("%s",player1);
        printf ("entre name of player  2 : ");
        scanf ("%s",player2);
            round_ate(n,player1,player2);
            printf ("Do you want to play agine ? Y / N ? ");
            scanf("%1s",yes);
    }while (strcmp(yes,"Y") == 0 || strcmp(yes,"y") == 0);
    printf ("%s and %s is GOOOOD \n" , player1 , player2);

}

int main ()
{
    srand(time(NULL));
    char player1[10];
    char player2[10];
    star_game(player1,player2);
}