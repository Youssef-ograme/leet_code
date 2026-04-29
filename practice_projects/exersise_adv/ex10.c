#include <stdio.h>
#include "headers.h"
void print_max (int nb1 , int nb2 , int nb3)
{
	printf ("%d",check_max_of_3_nbr (nb1 ,nb2 ,nb3));
}
int main ()
{
	int nb1 , nb2 , nb3;
	read_3_info(&nb1 , &nb2 , &nb3);

	print_max(nb1 ,nb2 ,nb3);

}
