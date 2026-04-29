#include <stdio.h>
typedef enum 
{
	pass = 1 , fail = 2 , sir_t9wed = 3
} info ;
void enter_info (int *nb1 , int *nb2 , int *nb3)
{
	printf ("enter point 1 : ");
	scanf ("%d",nb1);
	printf ("enter point 2 : ");
	scanf ("%d",nb2);
	printf ("enter point 3 : ");
	scanf ("%d",nb3);
}
int som_points (int nb1 , int nb2 , int nb3)
{
	return nb1 + nb2 + nb3;
}
int average (int nb1 , int nb2 , int nb3)
{
	int avera;
	avera = som_points (nb1,nb2,nb3) / 3;
	return avera;
}
info check_points (int nb1 , int nb2 , int nb3)
{
	if (average(nb1 , nb2 , nb3) < 10)
	{
		return fail;
	}
	else if (average (nb1 , nb2 , nb3) <= 20)
	{
		return pass;
	}
	else 
	{
		return sir_t9wed;
	}
}	
void print_average (int nb1 , int nb2 , int nb3)
{
	if (check_points(nb1 , nb2 , nb3) == pass)
	{
		printf ("nadi is pass \n");
	}
	else if (check_points (nb1 , nb2 , nb3) == fail)
	{
		printf ("ri katkhwer is fail \n");
	}
	else if (check_points (nb1 , nb2 ,nb3) == sir_t9wed)
	{
		printf ("3awd lhsab \n");
		
	}
}
int main ()
{
	int nb1 , nb2 , nb3;
	enter_info (&nb1 , &nb2 , &nb3);
	print_average (nb1 , nb2 , nb3);
}
