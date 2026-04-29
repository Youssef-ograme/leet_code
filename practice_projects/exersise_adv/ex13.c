#include <stdio.h>
#include "headers.h"
#include <math.h>
float calculate_rectangle (int a , int b)
{
	float som =   a * sqrt(ft_power(b,2) - ft_power(a,2));
	return som ;
}
void print_info (float area)
{
	printf ("Output : %.2f \n",area);
}
int main ()
{
	int a , b;
	read_2_info (&a,&b);
	print_info(calculate_rectangle(a,b));
}
