#include <stdio.h>
#include <string.h>
void print_caracters(char *password)
{
    int i = 65;
    int j ;
    int c , d;
    char world[5];
    int count = 0 ;
    while (i <= 90)
    {
        j = 65;
        while (j <= 90)
        {
            c = 65;
            while (c <= 90)
            {
                d = 65;
                while (d <= 90)
                {
                        world[0] = i;
                        world[1] = j;
                        world[2] = c;
                        world[3] = d;
                        count++;
                        printf ("Trial [%d] : %s \n",count,world);
                        if (strcmp(world,password) == 0)
                        {
                            printf ("Password is : %s \n",world);
                            printf ("found after %d Trial(s) \n",count);
                            return;
                        }
                        d++;
                }
                c++;
            }
            j++;
        }
        printf ("\n");
        i++;
    }
    printf ("%s is not found \n",password);
}

int main ()
{
    char password[4];
    printf("enter password : ") ;
    scanf("%s",password);
    print_caracters(password);
}