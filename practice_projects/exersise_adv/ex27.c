#include <unistd.h>
#include <stdio.h>
void ft_putchar (char c)
{
	write (1,&c,1);
}

void ft_print_comb_2(int n)
{
	int i = 0;
	int j;
	while (i < n)
	{
		j = i + 1;
		while(j < 89)
		{
			printf ("%d",i);
			printf ("%d ",j);
			j++;
		}
		i++;
	}
}
int main ()
{
	ft_print_comb_2(3);
}
