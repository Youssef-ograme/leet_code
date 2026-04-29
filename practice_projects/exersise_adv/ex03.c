#include <stdio.h>
#include <stdbool.h>
typedef struct
{
	int  age ;
	bool Driver;
} info;

info read_info ()
{
	info list;
	printf ("enter age : ");
	scanf ("%d",&list.age);
	printf ("is Driver : ");
	scanf ("%d",&list.Driver);
	return list;
	
}
bool Driver_license ( info list)
{
	return (list.age >= 21 && list.Driver);
}

void print_info (info list)
{
	
	if (Driver_license(list) == 1)
	{
		printf ("Hired \n");
	}
	else 
	{
		printf ("Reject \n");
	}
}
int main ()
{
	print_info (read_info());
}
