#include <stdio.h>
void read_number (int *nb1 , int *nb2 , int *nb3)
{
	
		printf ("enter nb1 : ");
		scanf ("%d",nb1);
		printf ("enter nb2 : ");
		scanf ("%d",nb2);
		printf ("enter nb3 : ");
		scanf ("%d",nb3);
}

int som_nbr (int nbr1 , int nbr2 , int nbr3)
{
	return (nbr1 + nbr2 + nbr3);
}

void print_nbr (int nbr1 , int nbr2 , int nbr3)
{
	printf ("som = %d",som_nbr(nbr1 , nbr2 , nbr3));
}

int main ()
{
	int nb1 , nb2 , nb3;
	read_number(&nb1 ,&nb2 , &nb3);
	print_nbr(nb1,nb2,nb3);
}
