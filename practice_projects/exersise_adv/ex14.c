#include <stdio.h>
#include "headers.h"
int calculate_area (int a , int b)
{
	int area = (a / 2) * b;
	return area;
}
void print_area (int area)
{
	printf ("%d",area);
}
int main ()
{
	int a , b;
	read_2_info (&a,&b);
	print_area(calculate_area (a,b));
}
