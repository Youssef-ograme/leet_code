#include "headers.h"
bool isPerfectNumber(int Number)
{
    if (Number < 1)
    {
        printf ("is negative \n");
        return 0;
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
        return true;
    }
    else 
    {
        return false;
    }
}
void print_result (int Number)
{
    if (isPerfectNumber(Number) == 1)
    {
        printf (" %d is perfect :) \n",Number);
    }
    else 
    {
        printf (" %d is not perfect :( \n",Number);
    }
}
int main ()
{
    int a ;
    read_info (&a);
    print_result(a);
}