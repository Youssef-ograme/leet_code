#include <stdio.h>
void print_inverted (int n)
{
    while (n > 0)
    {
        int i = 0 ;
        while (i < n)
        {
            printf ("%d",n);
            i++;
        }
        printf ("\n");
        n--;
    }
}
int main ()
{
    print_inverted(5);
}