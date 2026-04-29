#include <stdio.h>

#include "headers.h"
typedef enum 
{
	odd = 1 , even = 2
} info ;

info odd_and_even(int n)
{
	if (n % 2 == 1)
	{
		return odd;
	}
	else 
	{
		return even;
	}
}
int check_info_even (int n)
{
	int i = 0;
	int som = 0 ;

	while (i <= n)
	{
		if (odd_and_even(i) == even)
		{
			som += i;
		}
		i++;
	}
	return som;
}

int check_info_odd (int n)
{
	int i = 0;
	int som = 0 ;
	while (i <= n)
	{
		if (odd_and_even (i) == odd)
		{
			som += i;
		}
		i++;
	}
	return som;
}
void check_info (int n)
{
	//int even_som = check_info_even(n);
	int odd_som = check_info_odd(n);
	/*if ( even_som % 2 == 0)
	{
		printf ("som even is : %d \n",even_som);
	}*/
	if (odd_som % 2 == 1)
	{ 
		printf ("som odd is : %d \n",odd_som);
	}
	else 
	{
		printf ("no is even \n");
	}
}

int main ()
{
	int a;
	read_info (&a);
	check_info (a);
}
