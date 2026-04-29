#include "headers.h"
int print_random (int from , int to)
{
    if (from > to)
    {
        printf ("sir t9wwed \n");
        return 0;
    }
    else 
    {
       int randon_nb = rand() % (to - from + 1) + from;
       return randon_nb;
    }
}
int main ()
{
    srand(time (NULL));
   print_random(1,10);
   printf ("%d",print_random(1,10));
}