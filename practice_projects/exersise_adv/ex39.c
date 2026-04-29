#include "headers.h"
int read_numbers(char *message)
{
    int a = 0;
    do 
    {
        printf ("%s",message);
        scanf ("%d",&a);
    }while (a <= 0);
    return a ;
}

int print_som (int number)
{
    int som = 0;
    int Remainder ;
    while (number > 0)
    {
        Remainder = number % 10;
        som = Remainder + som;
        number = number / 10;
    }
    return som;
}
int main ()
{
    int som = read_numbers ("enter numbers : ");
    printf ("som : %d \n",print_som(som));
}