#include "headers.h"
void print_inverted(int number)
{
    int i = 1;
    int j ;
    while (i <= number)
    //      1 <
    {
        j = 1;
        while(j <= i)
        {
            printf ("%d",i);
            j++;
        }
        printf ("\n");
        i++;
    }
}
int main ()
{
    int a ;
    read_info(&a);
    print_inverted(a);
}