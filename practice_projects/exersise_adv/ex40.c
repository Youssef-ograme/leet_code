#include "headers.h"
int read_numbers (char *message)
{
    int a ;
    do 
    {
        printf ("%s",message);
        scanf ("%d",&a);
    } while (a <= 0);
    return a ;
}
int revers_numbers (int number)
{
    int Remainder ;
    int stack = 0;
    while (number > 0)
    {
        Remainder = number % 10;
        stack = (stack * 10 ) + Remainder;
        number = number / 10;
    }
    return stack;
}
int main ()
{
    int res = read_numbers("enter numbers : ");
    printf ("revers : %d \n",revers_numbers(res));
}