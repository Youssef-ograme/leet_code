#include <stdio.h>
int count_number (int nb)
{
	int count = 0;
	while (nb != 0)
	{
		count++;
		nb = nb / 10;
	}
	return count;
}

int check (int a , int b , char op)
{
	int res = 0;
	if (op == '+')
	{
		int val = count_number(b);
		res = a;
		while ( val > 0)
		{
			res = res * 10;
			val--;
		}
		res = res + b;
	}
	return res;

}

int main ()
{
	int a , b;
	char c;
	printf ("enter number a : ");
	scanf ("%d",&a);
	printf ("enter number b : ");
	scanf ("%d",&b);
	printf ("enter op : ");
	scanf (" %c",&c);
	printf ("%d",check(a,b,c));
}
