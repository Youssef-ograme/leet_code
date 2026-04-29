#include <stdio.h>
#include "headers.h"
void check_info (int nb)
{
	while (1)
	{
		if (nb >= 18 && nb <= 45)
		{
			printf ("naaaaadi \n");
			break;
		}
		else 
		{
			printf ("la 3awed \n");
			read_info(&nb);
		}
	}
}
int main ()
{
	int a ;
	read_info(&a);
	check_info (a);
}
