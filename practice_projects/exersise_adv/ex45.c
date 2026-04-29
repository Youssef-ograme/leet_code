#include "headers.h"
void PrintInvertedNumberPattern(int nb)
{
    int i = 0;
    int j;
    while (i < nb)
    {
        j = 1;
        while (j <= nb)
        {
            printf ("%d",nb);
            j++;
        }
        printf ("\n");
        nb--;
    }
}

int main ()
{
    int nb ;
    read_info(&nb);
    PrintInvertedNumberPattern(nb);
}