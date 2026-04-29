#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum 
{
    lowercase_letters = 1 , capital_letters = 2, symbol = 3 , degits = 4
}   info ;

int random_number (int from , int to)
{
    return rand() % (to - from + 1) + from;
}

int random_info (info information)
{
    if (information == lowercase_letters)
    {
        return (char)random_number(97,122);
    }
    else if (information == capital_letters)
    {
        return (char)random_number(65,90);
    }
    else if (information == symbol)
    {
        return (char)random_number(33,47);
    }
    else if (information == degits)
    {
        return (char)random_number(48,57);
    }
    else 
    {
        printf ("?\n");
    }
}
int main ()
{
    srand(time(0));
    printf ("%c",random_info(symbol));
}