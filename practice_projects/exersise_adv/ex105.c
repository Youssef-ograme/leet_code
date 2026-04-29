#include <stdio.h>
typedef enum 
{
	agadir = 0,
	talioun = 1,
	fes = 2,
	tanger = 3,
	kasa = 4
} liue ;
void menu ()
{
	printf ("****************** \n");
	printf ("-------MENU-------\n");
	printf ("****************** \n");
	printf (" 0 : agadir \n");
	printf (" 1 : talioun \n");
	printf (" 2 : fes \n");
	printf (" 3 : tanger \n");
	printf (" 4 : kasa \n");
	printf ("******************\n");
}

liue read_number ()
{
	int c ;
	printf ("enter number : ");
	scanf ("%d",&c);
	return c;
}

void if_statment (liue my_liue)
{
	if (my_liue == agadir)
	{
		printf ("bladna \n");
	}
	else if (my_liue == talioun)
	{
		printf ("darnkh \n");
	}
	else if (my_liue == fes)
	{
		printf ("agrzam \n");
	}
	else if (my_liue == tanger)
	{
		printf ("zin tema haahha \n");
	}
	else if (my_liue == kasa)
	{
		printf ("khwadriya \n");
	}
	else 
	{
		printf ("saf ri t9wed hahah \n");
	}
}
int main ()
{
		menu();
		if_statment (read_number());
}
