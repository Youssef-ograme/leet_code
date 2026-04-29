#include "headers.h"

void print_caracters(int nb)
{
    int i ;
    while (nb > 0)
    {
        i = 1;
        while (i <= nb)
        {
            printf ("%c",65 + nb - 1);
            i++;
        }
        printf ("\n");
        nb--;
    }
}
int main ()
{
    int nb ;
    read_info(&nb);
    print_caracters(nb);
}