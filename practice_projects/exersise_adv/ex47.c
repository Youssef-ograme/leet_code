#include "headers.h"
int read_numbers(char *message)
{
    int a ;
    do 
    {
        printf ("%s",message);
        scanf ("%d",&a);
    }   while (a <= 0);

    return a ;
}

void PrintInvertedNumberPattern (int number)
{
    int i = 1;
    int j;
    while (i <= number)
    {
        j = 1;
        while (j <= i)
        {
            printf ("%c", 'a' + i - 1);
            j++;
        }
        printf ("\n");
        i++;
    }
}
int main ()
{
    PrintInvertedNumberPattern(read_numbers("enter numbers : "));
}