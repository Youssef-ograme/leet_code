#include <stdio.h>
void print_inverted(int n)
{
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            printf ("%d",i);
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