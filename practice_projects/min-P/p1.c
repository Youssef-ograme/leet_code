#include <stdio.h>

int read_info ()
{
    int number ;
    do
    {
        printf ("enter number : ");
        scanf ("%d",&number);
    }while (number <= 0);
    return number;
}

int revers_arrays (int number)
{
    int stack;
    int revers = 0 ;
    while (number > 0)
    //     1234 > 0
    {
        stack = number % 10;
    //  [---] = 1234 % 10 = 4
    //  [---] = 123 % 10 = 3
    //  [---] = 12 % 10 = 2
    //  [---] = 1 % 10  = 1
    revers = revers * 10 + stack;
        number = number / 10;
    //  [---] =  1234 / 10 = 123
    //  [---] = 123 / 10 = 12
    //  [---] = 12 / 10 = 1 
    }
    return revers;
}

void is_pailandrom (int revers , int number)
{
    if (revers == number)
    {
        printf ("yes \n");
    }
    else 
    {
        printf ("no \n");
    }
}
int main ()
{
    int number = read_info ();
    int revers = revers_arrays(number);
    printf ("is pailandrom ? ");
    is_pailandrom(revers,number);
}