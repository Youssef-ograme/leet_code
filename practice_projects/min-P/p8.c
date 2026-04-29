#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random_number (int from , int to)
{
    return rand() % (to - from + 1) + from ;
}   

int main ()
{
    srand(time(0));
    
    int i  = 0;
    while (i < 3)
    {
        printf ("%d \n",random_number(0,10 - 1));
        i++;
    }
}