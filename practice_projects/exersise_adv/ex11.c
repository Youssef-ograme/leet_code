#include <stdio.h>
#include "headers.h"
void print_info(int a , int b)
{
	printf ("a = %d \nb = %d \n",a,b);
	swap(&a,&b);
	printf ("a = %d \nb = %d \n",a,b);
}
int main ()
{
	int a , b;
	read_2_info(&a,&b);
	print_info(a,b);
}
