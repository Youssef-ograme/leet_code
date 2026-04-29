#include <stdio.h>
void read_numbers (int *nb1 , int *nb2 , int *nb3)
{
	printf ("enter nb1 : ");
	scanf ("%d",nb1);
	printf ("enter nb2 : ");
	scanf ("%d",nb2);
	printf ("enter nb3 : ");
	scanf ("%d",nb3);
}
int som_numbers (int nb1 , int nb2 , int nb3)
{
	return nb1 + nb2 + nb3 ;
}

int average (int nb1 , int nb2 , int nb3)
{
	int som = som_numbers (nb1 , nb2 , nb3);
	return som / 3;
}

void print_average (int  nb1 , int nb2 , int nb3 )
{
	printf ("averge : %d \n",average (nb1 , nb2 , nb3));
}
int main ()
{
	int nb1 , nb2 , nb3;
	read_numbers(&nb1 , &nb2 , &nb3);
	print_average(nb1 , nb2 , nb3);
}
