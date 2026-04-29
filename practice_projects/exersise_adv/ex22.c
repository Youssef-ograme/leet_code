#include <stdio.h>
#include "headers.h"
bool calculate (int nb , int from , int to)
{
	return (nb >= 18 && nb <= 45);
}

void check_info (int nb)
{
	while (1)
	{
		if (calculate(nb,18,45) != 1)
		{
			printf ("ri 3awed \n");
			read_info(&nb);
		}
		else 
		{
			printf ("m3lllllllllm \n");
			break;
		}
	}
}
int main ()
{
	int a ;
	read_info (&a);
	check_info(a);
}
