#include "headers.h"
int enter_numbers (char *message)
{
    int a ;
    do 
    {
        printf ("%s",message);
        scanf ("%d",&a);
    }   while (a <= 0);
    return a ;
}

// revers numbers 
int revers_numbers (int number)
{
    int remainder;
    int stack = 0;
    while (number > 0)
    {
        remainder = number % 10;
        stack = stack * 10 + remainder;
        number = number / 10;
    }
    return stack;
}

void print_revers ()
{
    int number;
    printf ("rever : %d \n",revers_numbers(number));
}
bool is_plaindrome_number (int number)
{
    if (revers_numbers(number) == number)
    {
        return 1 ;
    }
    else 
    {
        return 0;
    }
}
void print_is_plaindrom_or_no (int number)
{
    if (is_plaindrome_number(number) == 1)
    {
        printf ("%d yes pailandrom \n",number);
    }
    else 
    {
        printf ("%d is not pailandrom \n",number);
    }
}
int main ()
{
    print_is_plaindrom_or_no(enter_numbers("enter number (s) : "));
    print_revers();
}