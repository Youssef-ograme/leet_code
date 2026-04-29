#include "headers.h"
int read_numbers(char *message)
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
    int cuont = 0;
    int remainder ;
    while (number > 0)
    {
                remainder = number % 10;
                if (remainder == n)
                {
                    cuont++;
                }
                number = number / 10;
    }
    return cuont;
}
int main ()
{
    int n ;
    int res = read_numbers("enter numbers : ");
    read_info(&n);
    printf ("digits %d frequency is %d time (s) \n",n,contur_number(res,n));
}