#include "headers.h"

void print_inverted_letter(int number)
{
    int i = 1;
    while (i <= number)
    {
        int j = 1;
        while (j <= i)
        {
            printf ("%c",65 + i - 1);
            //          65 + 1 = 66 - 1 = 65   A
            //          65 + 2 = 67 - 1 = 66   BB
            j++;
        }
        printf ("\n");
        i++;
    }
}
int main ()
{
    int a ;
    read_info(&a);
    print_inverted_letter(a);
}