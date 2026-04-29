#include <stdio.h>
int ft_power (int nb , int power)
{
    if (power == 0)
        return 1;
    return nb * ft_power (nb , power - 1);
                             4
                             3
                             2
                             1
                             0
    
}

int main ()
{
    printf ("%d",ft_power(2,4));
}