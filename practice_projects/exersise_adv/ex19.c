#include <stdio.h>
#include "headers.h"
float calculate (int a , int b)
{
	float area = 3.14 * ((float)ft_power(b,2) / 4) * ((float)(2 * a - b) / (2 * a + b));
	return area;
}
void print_info (float area)
{
	printf ("output : %.2f \n",area);
}
int main ()
{
	int a , b;
	read_2_info (&a,&b);
	print_info (calculate(a,b));
}
