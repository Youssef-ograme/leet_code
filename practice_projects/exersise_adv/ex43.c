#include "headers.h"

int read_numbers (char *message)
{
    int a ; 
    do 
    {
        printf ("%s",message);
        scanf ("%d",&a);
    }   while (a <= 0);
    return a;
}

int revers_numbers (int number)
{
    int remainder;
    int stack = 0;
    while (number > 0)
    {
        remainder = number % 10;
        // 1234 % 10 = 4
        stack = (stack * 10) + remainder;
        // 0 = 0 * 10 = 0 
        // 0 + 4 = 4 
        // 4 = 4 * 10 = 40 + 3 = 43
        // 43 * 10 = 430
        // 430 + 2 = 432
        // 432 * 10 = 4320 
        // 4320 + 1 = 4321
        number /= 10;
    }
    return stack;
    // 4321
}

void print_numbers (int number)
{
    int remainder;
    while (number > 0)
    {
        remainder = number % 10;
        //          4321 % 10 = 1 
        //          432 % 10 = 2 
        //          43 % 10 = 3 
        //          4 % 10 = 4 
        printf ("%d",remainder);
        // 1 2 3 4 
        number /= 10;
        // 432
    }
}

int main ()
{
    print_numbers(revers_numbers(read_numbers("enter numbers : ")));
}