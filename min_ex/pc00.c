#include <stdio.h>
int recursive (int n)
{
    if (n == 1)
    {
        return 1;
    }
    else 
    {
        return 1 + recursive(n - 1);
    }
}

int main ()
{
    int n = 3;
    printf ("%d",recursive(n));
}