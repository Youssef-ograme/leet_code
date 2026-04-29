#include <stdio.h>

int read_info (char *message )
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
        remainder = number % 10 ;
        stack = stack * 10 + remainder;
        number = number / 10;
    }
    return stack;
}

void print_degits(int number)
{
    if (revers_numbers(number) == number)
    {
        printf ("yes is palindrome \n");
        return ;
    }
    else 
    {
        printf ("no it is not pilandorme \n");
        return ;
    }
}
int main ()
{
    print_degits(revers_numbers(read_info("enter numbers : ")));
}