#include "headers.h"
int random_info(int from , int to)
{
    int randomin = rand() % (to - from + 1) + from;
    return randomin;
}
void print_random (int n)
{
    int j = 0;
        while (j < n)
        {
            printf ("%d ",random_info(0,n - 1));
            j++;
        }
    
}
int main ()
{
    int n ;
    printf ("enter number : ");
    scanf ("%d",&n);
    srand(time(NULL));
    print_random(n);
}