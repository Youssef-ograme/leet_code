#include "headers.h"
bool isPerfectNumber(int Number)
{
    if (Number < 1)
    {
        printf ("is negative \n");
        return false;
    }
    int i = 1;
    int som = 0;
    while (i < Number)
    {
        if (Number % i == 0)
        {
            som = som + i;
        }
        i++;
    }
    if (Number == som)
    {
        return 1 ;
    }
    else 
    {
        return 0;
    }
}

void print_info (int Number)
{
    int i = 1;
    while (i < Number)
    {
        if (isPerfectNumber(i) == 1)
        {
            printf ("%d \n",i);
        }
        i++;
    }
}
int main ()
{
    int a ;
    read_info(&a);
    print_info(a);
}