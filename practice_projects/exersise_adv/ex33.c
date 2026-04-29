#include "headers.h"
typedef enum
{
	bsla = 1 , maticha = 2 , khizo = 3 , batata = 4
} info ;

info  lakis (int a)
{
	if (a == bsla)
	{
		return bsla;
	}
	else if (a == maticha)
	{
		return maticha;
	}
	else if (a == khizo)
	{
		return khizo;
	}
	else if (a == batata)
	{
		return batata;
	}
}
void check_info (int a , int khlas)
{
	int taman ;
	int som ;
	if (khlas == 0)
	{
        printf ("sir l9wwwwed \n");
		return ;
	}
	if (lakis(a) == bsla)
	{
		taman = 10 ;
		if (taman <= khlas)
		{
			som = khlas - taman;
			if (som == 0)
			{
                printf ("bsha ou raha bro \n");
				return ;
			}
			printf ("hak serf : %d DH ",som);
			return ;
		}
		else 
		{
			som = taman - khlas ;
			printf ("ba9i khsak %d DH \n",som);
			return ;
		}
	}
	else if (lakis(a) == maticha)
	{
		taman = 20 ;
		if (taman <= khlas)
		{
			som = khlas - taman;
			if (som == 0)
			{
                printf ("bsha ou raha bro \n");
				return ;
			}
			printf ("hak serf : %d DH ",som);
			return ;
		}
		else 
		{
			som = taman - khlas ;
			printf ("ba9i khsak %d DH \n",som);
			return ;
		}
	}
	else if (lakis(a) == khizo)
	{
		taman = 14 ;
		if (taman <= khlas)
		{
			som = khlas - taman;
			if (som == 0)
			{
                printf ("bsha ou raha bro \n");
				return ;
			}
			printf ("hak serf : %d DH",som);
			return ;
		}
		else 
		{
			som = taman - khlas ;
			printf ("ba9i khsak %d DH\n",som);
			return ;
		}
	} 
	else if (lakis(a) == batata)
	{
		taman = 30;
		if (taman <= khlas)
		{
			som = khlas - taman;
			if (som == 0)
			{
                printf ("bsha ou raha bro \n");
				return ;
			}
			printf ("hak serf : %d DH ",som);
			return ;
		}
		else 
		{
			som = taman - khlas ;
			printf ("ba9i khsak %d DH \n",som);
			return ;
		}
	}

}
int main ()
{
	int a ,b;
	printf ("ach briti hak list ? \n");
	list();
	read_2_info_lakis(&a,&b);
	check_info(a,b);
}