#include <stdio.h>
#include <stdlib.h>
char *read_name ()
{
	char *name = malloc (30);
	if (name == NULL)
	{
		printf ("sir t9wed \n");
		exit(0);
	}
	printf ("enter name : ");
	scanf ("%s",name);
	return name ;
}

void print_name (char *str)
{
	printf ("my name is : %s \n",str);
}
int main ()
{
	print_name (read_name());
	free(read_name());
}

