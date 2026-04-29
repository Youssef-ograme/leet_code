#include <stdio.h>
#include "headers.h"
void power_numbers (int a)
{
    printf (" power of 2 : %d \n",    ft_power(a,2));
    printf (" power of 3 : %d \n",    ft_power(a,3));
    printf (" power of 4 : %d \n",    ft_power(a,4));
}
int main ()
{
    int a;
    read_info (&a);
    power_numbers(a);
}