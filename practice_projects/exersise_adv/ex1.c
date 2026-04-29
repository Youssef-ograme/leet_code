#include <stdio.h>
int main ()
{
	int i = 10;
	int j ;
	while (i >= 0)
	{
		j = 0;
		while (j <= i)	
		{
			printf ("*");
			j++;
		}
		printf ("\n");
		i--;
	}
}
