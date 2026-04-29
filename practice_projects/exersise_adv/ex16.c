#include <stdio.h>
#include "headers.h"
float calcuate (int r)
{
	float som = (3.14 * ft_power(r,2)) / 4;
	return som;
}
void print_info (float r)
{
	printf ("output : %.2f \n",r);
}
int main ()
{
	int r ; 
	read_info(&r);
	print_info (calcuate(r));

}
