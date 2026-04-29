#include "headers.h"

void print_inverted (int number)
{
    int i ;
    while (number > 0)
    {
        i = 0;
        while (i < number)
        {
            printf ("%d",number);
            i++;;
        }
        printf ("\n");
        number--;
    }
}

int main ()
{
    int a ;
    read_info (&a);
    print_inverted(a);
}