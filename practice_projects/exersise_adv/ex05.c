#include <stdio.h>
typedef enum 
{
	pass = 1 , fail = 2
} info;
int raed_mark ()
{
	int mark;
	printf ("enter mark : ");
	scanf ("%d",&mark);
	return mark;
}
info check_mark (int mark)
{
	if (mark >= 50)
	{
		return pass;
	}
	else 
	{
		return fail;
	}
}
void print_mark (int mark)
{
	if (check_mark(mark) == pass)
	{
		printf("You passed ! \n");
	}
	else 
	{
		printf ("you fail ! \n");
	}
}
int main ()
{
	print_mark (raed_mark());
}
