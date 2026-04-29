#include <stdio.h>
#include "headers.h"
void print_info (int n)
{
	printf ("%d",n);
}
void while_hh (int n)
{
	do 
	{
		print_info (n);
		n--;
	}while (n >= 1);
}
int main ()
{
	int a;
	read_info (&a);
	while_hh(a);
}
