#include <stdio.h>
typedef enum 
{
	Black = 0,
	Red = 1,
	Green = 2,
	Blue = 3
} my_color;
void list_color (my_color color)
{
	if ( color == Red )
	{
		printf ("fff");
	}
	else if (color == Green)
	{
		printf ("\033[32m");
	}
	else if(color == Blue)
	{
		printf ("\033[34m");
	}
	else if (color == Black)
	{
		printf ("\033[30m");
	}
	else 
	{
		printf ("sir dar innak \n");
	}

}
int main ()
{
	printf ("select a color by numbers : \n");
	printf ("0 - Black \n")	;
	printf ("1 - Red \n");
	printf ("2 - Green \n");
	printf ("3 - Blue \n");
	int input ;
	printf ("enter number : ");
	scanf ("%d",&input);
	list_color((my_color)input);
}
