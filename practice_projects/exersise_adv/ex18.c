#include <stdio.h>
#include "headers.h"
float calculate (int l)
{
	float area = ft_power(l,2) / (4 * 3.14);
	return area ;
}
void print_info (float l)
{
	printf ("output : %.2f \n",l);
}
int main ()
{
	int l;
	read_info (&l);
	print_info (calculate(l));
}
