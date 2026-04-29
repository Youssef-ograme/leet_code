#include <stdio.h>
int Count_Digits (long long int nbr , int count)
{
    if (nbr > 0)
    {
        count++;
        Count_Digits(nbr / 10 , count);
    }
    if (nbr == 0)
        return count;
}

int main ()
{
    printf ("%d",Count_Digits(123293484786492774,0));
}