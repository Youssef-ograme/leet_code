#include "headers.h"

void print_caracters()
{
    int i = 65;
    int j ;
    int c ;
    while (i <= 90)
    {
        j = 65;
        while (j <= 90)
        {
            c = 65;
            while (c <= 90)
            {
                printf ("%c %c %c\n",i,j,c);
                c++;
            }
            j++;
        }
        printf ("\n");
        i++;
    }
}

int main ()
{
    print_caracters();
}