#include <stdio.h>

int update_negative (int nb)
{
    int nbr ;
    if (nb < 0)
    {
        nbr = -nb;
    }
    if (nbr > 0)
    {
        nbr = nb;
    }
    return nbr;
}
int main ()
{
    printf ("%d",update_negative(-100));
}