#include "headers.h"
typedef enum 
{
	notPrime = 0 , prime = 1

}  info ;

info is_prime(int n)
{
	if (n < 2)
	{
		printf ("no is not prime ! \n");
		exit(0);
	}
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
void print_prime_or_not (int n)
{
	if (is_prime(n) ==  prime)
	{
		printf("%d : is prime \n");
	}
	else if (is_prime(n) == notPrime)
	{
		printf ("%d : not prime ! \n");
	}
}
int main ()
{
    int a ;
    read_info(&a);    
    print_prime_or_not(a);
}
