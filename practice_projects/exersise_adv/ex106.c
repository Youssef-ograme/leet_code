#include <stdio.h>
struct info 
{
	int age ;
	char name[10];
};

void read_info (struct info information[2])
{
	int i = 0;
	while (i < 2)
	{
		printf ("person %d \n",i + 1);
		printf ("enter age : ");
		scanf ("%d",&information[i].age);
		printf ("enter name : ");
		scanf ("%s",information[i].name);
		i++;
	}
	return ;
}

void	print_info (struct info information[2])
{
	int i = 0;
	while (i < 2)
	
		printf ("person %d \n", i + 1);
		printf (" age : %d \n",information[i].age);
		printf (" name : %s \n",information[i].name);
		i++;
	}
	return ;
}
int main ()
{
	struct info information[2];
	read_info (information);
	printf ("***************************\n");
	print_info (information);
}
