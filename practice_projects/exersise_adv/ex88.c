#include <stdio.h>

int power_recursive (int n , int m)
{
    if (m > 1)
    {
        int power = power_recursive(n , m - 1);
        return n * power;
    }
}

int main ()
{
    printf("%d",power_recursive(5,5));
}