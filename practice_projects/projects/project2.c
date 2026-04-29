#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int random_numbers (int from , int to)
{
    return rand() % (to - from + 1) + from;
}

char operayters()
{
    char op;
    do 
    {
        op = (char) random_numbers(42,47);

    }while(op == '.' || op == ',');

    return op;
}

int random_horizontal_numbers (int level)
{
    int number;
    if (level == 1)
    {
            number = random_numbers(1,10);
    }
    else if (level == 2)
    {
            number = random_numbers(10,50);
    } 
    else if (level == 3)
    {
            number = random_numbers(50,100);
    } 
    else if (level == 4)
    {
            number = random_numbers(1,150);
    }

    return number;
}

int random_numbers_below (int level)
{
    int number;
    if (level == 1)
    {
            number = random_numbers(1,10);
    }
    else if (level == 2)
    {
            number = random_numbers(10,50);
    } 
    else if (level == 3)
    {
            number = random_numbers(50,100);
    } 
    else if (level == 4)
    {
            number = random_numbers(100,150);
    }
    else if (level == 5)
    {
            number = random_numbers(1,1000);
    }
    return number;
}

int Mix_Operation (int above , char op , int lowest)
{
    int res ;
    if (op == '+')
    {
        res = above + lowest;
    }
    else if (op == '/')
    {
        res = above / lowest;
    }
    else if (op == '-')
    {
        res = above - lowest;
    }
    else if (op == '*')
    {
        res = above * lowest;
    }
    return res;
}

void final ()
{
    printf ("\n------------------------------------------\n");
    printf ("\t\tFinal Results is PASS :) \n");
    printf ("------------------------------------------\n\n");
}

void final_results (int n , int level , int type , int Worng , int right)
{
    final();
    printf ("Number of Question : %d\n",n);
    if (level == 1)
    {
            printf (" Question Level    : Easy \n");
    }
    else if (level == 2)
    {
            printf (" Question Level    : Med\n");
    }
    else if (level == 3)
    {
            printf (" Question Level    : Hard\n");
    }
    else 
    {
            printf (" Question Level    : Mix \n");
    }

    if (type == 1)
    {
            printf ("OpType             : Add \n");
    }
    else if (type == 2)
    {
            printf ("OpType             : Sub \n");
    }
    else if (type == 3)
    {
            printf ("OpType             : Mul \n");
    }
    else if (type == 4)
    {
            printf ("OpType             : Div \n");
    }
    else
    {
            printf ("OpType             : Mix \n");
    }
    printf ("Number of Worng  Answers : %d \n",right);
    printf ("Number of Right Answers : %d \n",Worng);    
    printf ("\n---------------------------------------\n");
}

void linking_operayters (int level , int type , int n)
{
    int res ;
    char op;
    int above;
    int total ;
    int lowest;    
    int Worng = 0;
    int right = 0;
    // +
    if (type == 1)
    {
        
        int i = 0;
        while (i < n)
        {
            printf ("\nGestion [%d / %d] \n",i + 1 , n);
            above = random_horizontal_numbers(level);
            lowest = random_numbers_below(level);
            res = above + lowest;
            printf ("%d\n",above);
            printf ("   +\n");
            printf ("%d",lowest);
            printf ("\n----------\n");
            scanf ("%d",&total);
            if (res == total)
            {
                printf (" = %d\n\n",res);
                printf ("Right Answer :) \n");
                Worng++;
            }
            else 
            {
                printf ("\nWorng Answer :( \n");
                printf ("The right answer is : %d \n",res);
                right++;
            }
            i++;
        }
        final_results(n,level,type,Worng,right);
    }
    // -
    else if (type == 2)
    {
        Worng = 0;
        right = 0;
        int i = 0;
        while (i < n)
        {
            printf ("\nGestion [%d / %d] \n",i + 1 , n);
            above = random_horizontal_numbers(level);
            lowest = random_numbers_below(level);
            res = above - lowest;
            printf ("%d\n",above);
            printf ("   -\n");
            printf ("%d",lowest);
            printf ("\n----------\n");
            scanf ("%d",&total);
            if (res == total)
            {
                printf (" = %d\n\n",res);
                printf ("Right Answer :) \n");
                Worng++;
            }
            else 
            {
                printf ("\nWorng Answer :( \n");
                printf ("The right answer is : %d \n",res);
                right++;
            }
            i++;
        }
        final_results(n,level,type,Worng,right);
    }
    // *
    else if (type == 3)
    {
        Worng = 0;
        right = 0;
        int i = 0;
        while (i < n)
        {   printf ("\nGestion [%d / %d] \n",i + 1 , n);
            above = random_horizontal_numbers(level);
            lowest = random_numbers_below(level);
            res = above * lowest;
            printf ("%d\n",above);
            printf ("   *\n");
            printf ("%d",lowest);
            printf ("\n----------\n");
            scanf ("%d",&total);
            scanf ("%d",&total);
            if (res == total)
            {
                printf (" = %d\n\n",res);
                printf ("Right Answer :) \n");
                Worng++;
            }
            else 
            {
                printf ("\nWorng Answer :( \n");
                printf ("The right answer is : %d \n",res);
                right++;
            }
            i++;
        }
        final_results(n,level,type,Worng,right);
    }
    // /
    else if (type == 4)
    {
        Worng = 0;
        right = 0;
        int i = 0;
        while (i < n)
        {
            printf ("\nGestion [%d / %d] \n",i + 1 , n);
            above = random_horizontal_numbers(level);
            lowest = random_numbers_below(level);
            res = above / lowest;
            printf ("%d\n",above);
            printf ("   /\n");
            printf ("%d",lowest);
            printf ("\n----------\n");
            scanf ("%d",&total);
            if (res == total)
            {
                printf (" = %d\n\n",res);
                printf ("Right Answer :) \n");
                Worng++;
            }
            else 
            {
                printf ("\nWorng Answer :( \n");
                printf ("The right answer is : %d \n",res);
                right++;
                
            }
            i++;
        }
        final_results(n,level,type,Worng,right);
    }
    // Mix
   
     else if (type == 5)
    {
        Worng = 0;
        right = 0;
        int i = 0;
        while (i < n)
        {
            printf ("\nGestion [%d / %d] \n",i + 1 , n);
            op = operayters();
            above = random_horizontal_numbers(level);
            lowest = random_numbers_below(level);
            res = Mix_Operation(above,op,lowest);
            printf ("%d\n",above);
            printf ("   %c\n",op);
            printf ("%d",lowest);
            printf ("\n----------\n");
            scanf ("%d",&total);
            if (res == total)
            {
                printf (" = %d\n\n",res);
                printf ("Right Answer :) \n");
                Worng++;
            }
            else 
            {
                printf ("\nWorng Answer :( \n");
                printf ("The right answer is : %d \n",res);
                right++;
            }
            i++;
        }
        final_results(n,level,type,Worng,right);
    }
}

void link_game ()
{
    int n ;
    printf ("How many Questions do you want to answer ? ");
    scanf ("%d",&n);
    int level;
    printf ("Enter Questions Level [1] Easy , [2] Med , [3] Hard , [4] Mix ? ");
    scanf("%d",&level);
    int type ;
    printf ("Enter Operation Type [1] Add , [2] Sub , [3] Mul , [4] Div , [5] Mix ? ");
    scanf ("%d",&type);
    printf ("\n\n");
    linking_operayters(level,type,n);
}

void star_game()
{
    char yes[5];
    do 
    {
        link_game();
        printf ("Do you want to play again ? Y / N ? ");
        scanf ("%s",yes);
    } while (strcmp(yes,"Y") == 0 || strcmp(yes,"y") == 0);
}
int main ()
{
    srand(time(NULL));
   star_game();
}
