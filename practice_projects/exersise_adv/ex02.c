#include <stdio.h>
typedef enum
{
	odd = 0,
	even = 1
}odev;
struct info
{
	int n ;
};

int read_number ()
{
	struct info nn;
	nn.n;
	printf ("enter number : ");
	scanf ("%d",&nn.n);
	return nn.n ;
}

odev check_numbers (int n)
{
	if (n % 2 == 0)
	{
		return even;
	}
	else 
	{
		return odd;
	}
}
void print_evod ()
{
	if (check_numbers (read_number()) == 0)
	{
		printf ("odd \n");
	}
	else 
	{
		printf ("even \n");
	}
}
int main ()
{
	print_evod();
}
