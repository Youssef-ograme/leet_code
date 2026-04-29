#include "headers.h"
typedef enum {
    prime = 1 , notPrime = 0
} info ;

info is_prime(int n)
{
   
    int i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
        {
            return notPrime; 
        }
        i++;
    }
    return prime;
}
void PrintPrimeNumbersFrom1ToN (int n)
{
     if (n <= 1)
    {
        printf (" %d : no is not prime \n");
    }
    int i = 1;
    while(i <= n)
    {
        if (is_prime(i) == prime)
        {
            printf ("prime : %d \n",i);
        }
        i++;
    }
}
int main ()
{
    int a ;
    read_info(&a);
    PrintPrimeNumbersFrom1ToN(a);
}