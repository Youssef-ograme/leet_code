#include "headers.h"
int read_numbers (char *message)
{
    int a ;
    do 
    {
        printf ("%s",message);
        scanf ("%d",&a);
    } while (a <= 0);
    return a;
}
int contur_number (int number , int n)
{
    int remainder ;
    int count = 0;
    while (number > 0)
    {
            remainder = number % 10;
            if (remainder == n)
            {
                count++;
            }
            number /= 10;
    }
    return count;
}
void print_degits (int number)
{
    int i = 0;
    int res ;
    while (i < 10)
    {
        res = contur_number(number ,i);
        if (res > 0)
        {
            printf ("digits %d dreqency is %d time (s)\n",i,res);
        }
        i++;
    }
}
int main ()
{
    int n ;
    int res = read_numbers("enter numbers : ");
    print_degits(res);
}