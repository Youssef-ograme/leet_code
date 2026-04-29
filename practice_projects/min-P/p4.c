#include <stdio.h>
void print_inverted(int n)
{
   int j ;
   while (n >= 1)
   {
        j = 1;
        while (j <= n)
        {
            printf ("%c",(65 + n) - 1);
            j++;
        }
        printf ("\n");
        n--;
   }
}
int main ()
{
    print_inverted(5);
}