#include <stdio.h>
#include "headers.h"
int check_max(int nb1 , int nb2 )
{
	if (nb1 > nb2 )
	{
		return nb1;
	}
	else if (nb2 > nb1)
	{
		return nb2;
	}
}
void print_max (int nb1 , int nb2)
{
	printf ("%d",check_max(nb1,nb2));
}
int main ()
{
	int nb1 , nb2;
	read_info(&nb1,&nb2);
	print_max(nb1,nb2);
}
