#include "headers.h"

int randomin (int from , int to)
{
    int ran = rand() % (to - from + 1);
    return ran;
}
int main ()
{
    srand (time(NULL));
    int i = 0;
    while (i < 10)
    {
        printf ("%d \n",randomin(1,5));
        i++;
    }
}