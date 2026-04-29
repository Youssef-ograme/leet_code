#include <stdio.h>
#include "headers.h"
float calculate (int r)
{
	float area = (3.14 * ft_power(r,2)) / 4;
	return area;
}
void print_info (float r)
{
	printf (" output : %.2f \n",r);
}
int main ()
{
	int r ;
	read_info (&r);
	print_info(calculate(r));
}
