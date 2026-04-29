	#include <stdbool.h>
	#include<stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <time.h>
void read_3_info (int *nb1 , int *nb2 , int *nb3)
{
	printf ("enter nbr 1 : ");
	scanf ("%d",nb1);
	printf ("enter nbr 2 : ");
	scanf ("%d",nb2);
	printf ("enter nbr 3 : ");
	scanf ("%d",nb3);
}
void list ()
{
	printf ("|------------------------------|\n");
	printf ("|            List              |\n");
	printf ("|------------------------------|\n");
	printf ("| 1 : BSLA    = 10 DH          |\n");
	printf ("| 2 : MATICHA = 20 DH	       |\n");
	printf ("| 3 : KHIZZO  = 14 DH          |\n");
	printf ("| 4 : BATATA  = 30 DH          |\n");
	printf ("|------------------------------|\n");
}

int check_max_of_3_nbr (int nb1 , int nb2 , int nb3)
{
	if (nb1 > nb2 && nb1 > nb3)
	{
		return nb1;
	}
	else if(nb2 > nb1 && nb2 > nb3)
	{
		return nb2;
	}
	else if (nb3 > nb1 && nb3 > nb2)
	{
		return nb3;
	}
}
void read_info (int *r)
{
	printf ("enter info : ");
	scanf ("%d",r);
}
void read_2_info_lakis (int *a , int *b)
{
	printf ("hal list chof ach briti : ");
	scanf ("%d",a);
	printf ("ara lflous taman : ");
	scanf ("%d",b);
}

void swap (int *a , int *b)
{
	int temp ;
	temp = *a;
	*a = *b;
	*b = temp;
}

void read_2_info (int *a , int *b)
{
	printf ("enter number in length : ");
	scanf ("%d",a);
	printf ("enter number in Width : ");
	scanf ("%d",b);
}

int hhh_sqrt(int nb)
{
	int i = 1;
	while (i * i <= nb)
		i++;
	return i - 1;
}
int ft_power(int a , int power)
{
	int i = 0;
	int som = 1;
	if (power < 0)
	{
		printf ("no is zero ! \n");
		return 0;
	}
	while (power > 0)
	{
		som = som * a;
		power--;
	}
	return som;
}

/*void check_info(char *password)
{
    int i = 65;
    int j ;
    int c ;
    int count = 0;
    char world[4];
    while (i <= 90)
    {
        j = 65;
        while (j <= 90)
        {
            c = 65;
            while (c <= 90)
            {
                world[0] = i;
                world[1] = j;
                world[2] = c;
                world[3] = '\0';
                count++;
                printf ("countur [ %s ] index [%d] \n",world,count);
                if (strcmp(world,password) == 0)
                {
                    printf ("password is : %s \n",world);
                    printf ("found after %d trial (s) \n",count);
                    return ;
                }
                c++;
            }
            j++;
        }
        printf ("\n");
        i++;
    }
    printf ("password [%s] is not found ! \n",password);
}*/