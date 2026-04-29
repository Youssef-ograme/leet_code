#include "headers.h"
void    print_password (char *password) 
{
    int a = 65;
    int b ;
    int c ;
    int count = 0;
    char stack[4];
    while (a <= 90)
    {
        b = 65;
        while (b <= 90)
        {
            c = 65;
            while (c <= 90)
            {
                stack[0] = a ;
                stack[1] = b ;
                stack[2] = c;
                stack[3] = '\0';
                printf ("[ %d ]\n",count);
                count++;
                if (strcmp (stack,password) == 0)
                {
                    printf ("password is [%d] -> %c%c%c \n",count,a,b,c);
                    return ;
                }
                c++;
            }
            b++;
        }
        a++;
    }
}
int main ()
{
    char password[4];
    printf ("enter password : ");
    scanf ("%s",password);
    print_password(password);
}