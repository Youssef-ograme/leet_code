#include <stdio.h>
void read_nbr (int *nbr)
{
	printf ("enter nbr : ");
	scanf ("%d",nbr);
}
float half_number (int a)
{
	return (float)a / 2;
}
void print_nbr (float a)
{
	printf ("%.2f",a);
}
int main ()
{
	int a ;
	read_nbr (&a);
	print_nbr(half_number(a));
}

