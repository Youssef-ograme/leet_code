#include <stdio.h>
void print(int n)
{
    printf ("this number : %d \n",n);
}

void check (int *tab, int nb , void (*f)(int))
{
    int i = 0;
    while (i < nb)
    {
        f(tab[i]);
        i++;
    }
}

int main ()
{
    int tab[] = {1,2,3,4};
    check (tab,4,print);
}