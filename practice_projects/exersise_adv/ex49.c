#include "headers.h"
void check_info(char *password)
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
                printf ("countur [%s] index [%d] \n",world,count);
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
    printf ("password [%s] is not found! \n",password);
}

int main ()
{
    char str[4];
    printf ("enter password : ");
    scanf ("%s",str);
    check_info(str);
    
}