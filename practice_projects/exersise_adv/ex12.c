#include <stdio.h>
#include "headers.h"
void print_area (int a , int b)
{
	printf ("erea : %d",a*b);
}
int main ()
{
	int a , b ;
	read_2_info(&a,&b);
	print_area(a,b);
}
