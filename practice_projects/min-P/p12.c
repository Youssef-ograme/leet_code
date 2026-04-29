#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int random_number(int from , int to)
{
    return rand() % (to - from + 1) + from;
}

void print_random (int n)
{
    int i = 0;
    int number[n];
    while (i < n)
    {
        number[i] = random_number(1,100);
        printf ("%d ",number[i]);
        i++;
    }
}
int main ()
{
    srand(time(0));
    int n = 10;
    print_random(n);
}