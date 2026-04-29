#include <stdio.h>
#include "headers.h"
#include <math.h>
float calculate (int a , int b , int c)
{
	int p = (a + b + c) / 2;
	int j = p * ((p - a) * (p - b) * (p - c));
	int r = 4 * sqrt(j);
	int l = a * b * c;
	int m = l / r;
	float area = 3.14 * ft_power (m,2);
	return area;
}
void print_info (float area)
{
	printf ("output : %.2f",area);
}
int main ()
{
	int a , b,  c;
	read_3_info(&a,&b,&c);
	print_info (calculate(a,b,c));
}
