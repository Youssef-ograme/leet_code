#include <stdio.h>
int main ()
{
	int i = 10;

	while (i >= 1)
	{
		int j = 1;
		while (j <= i)
		{
			printf ("%d",j);
			j++;
		}
		printf ("\n");
		i--;

	}
}
