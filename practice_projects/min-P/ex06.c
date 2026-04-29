#include "headers.h"

void print_world_from_AAA_ZZZ ()
{
    int i = 65;
    while (i <= 90)
    {
        int j = 65;
        while (j <= 90)
        {
            int k = 65;
            while (k <= 90)
            {
                printf ("%c %c %c\n",i,j,k);
                k++;
            }
            j++;
        }
        i++;
    }
}
int main ()
{
    print_world_from_AAA_ZZZ();
}