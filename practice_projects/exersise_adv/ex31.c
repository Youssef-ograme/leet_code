#include "headers.h"
void is_prime(int n)
{
    if (n < 2)
    {
        printf ("no is not prime ! \n");
        return;
    }
         int i = 2;
         while (i * i <= n)
         {
            if (n % i == 0)
            {
               printf(" %d is not prime : divisible by %d \n",n,i);
               return ;
            }
           i++;
         }
              printf ("is prime \n");
}
int main ()
{
    int a ;
    read_info(&a);    
    is_prime(a);
}
