#include <stdio.h>
void print_inverted(int n)
{
    int i = 1 ;
    int j ;
    while (i <= n)
    {
        j = 1 ;
        while (j <= i)
        {
            printf ("%c",(65 + i) - 1);
            j++;
        }
        printf ("\n");
        i++;
    }
}
int main ()
{
    print_inverted(5);
}