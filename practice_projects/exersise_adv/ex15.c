#include <stdio.h>
#include "headers.h"
float calculate_circle (int r)
{
	float som = 3.14 * ft_power(r,2);
	return som;
}
void print_info (float r)
{
	printf ("circle area : %.2f \n",r);
}
int main ()
{
	int r ;
	read_info(&r);
	print_info(calculate_circle(r));

}

