#include "headers.h"
void while_info (int n)
{
    int som = 0;
    while (1)
    {
        read_info(&n);
        if (n == -99)
        {
            break;
        }
        som = som + n;
    }
    printf ("%d",som);
}
int main ()
{
    int a;
    while_info(a);
}
