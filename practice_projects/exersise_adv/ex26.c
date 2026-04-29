#include <stdio.h>
#include "headers.h"
int facturial (int n)
{
	int som = 1;
	while (n >= 1)
	{
		som = n * som ;
		n--;
	}
	return som ;
}
void print_facturial(int n)
{
	printf ("facturial : %d \n",n);
}
int main ()
{
	int a ;
	read_info (&a);
	print_facturial (facturial(a));
}
