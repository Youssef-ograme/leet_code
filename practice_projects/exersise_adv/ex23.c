#include <stdio.h>
#include "headers.h"
void print_info (int a ,int n)
{
		printf ("%d",a);
}

void while_numbers (int n)
{
	int i = 0;
	do {
		print_info (i,n);
		i++;
	} while (i <= n);
}
int main ()
{
	int a ;
	read_info (&a);
	while_numbers (a);
}
