#include <stdio.h>
int ft_round (float num)
{
    if (num - (int)num > 0.5)
    {
        return num;
    }
    else 
    {
        return num;
    }
}

int main ()
{
    printf ("%d",ft_round(4.3));
}