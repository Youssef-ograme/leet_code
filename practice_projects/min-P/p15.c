#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int read_number (int from , int to)
{
    return rand() % (to - from + 1) + from ;
}

int *random_arr(int n)
{
    int *arr = malloc (n * sizeof (int));
    int i = 0;
    while (i < n)
    {
        arr[i] = read_number(1,100);
        i++;
    }
    return arr;
}

int som_random (int *arr , int n)
{
    int i = 0;
    int som = 0;
    while (i < n)
    {
        som = som + arr[i];
        i++;
    }
    if (som == 0)
    {
        printf ("error ! \n");
        exit(0);
    }
    return som;
}

int main ()
{
    srand(time(NULL));
    int n ;
    printf ("enter n : ");
    scanf ("%d",&n);
    int *arr = random_arr(n);
    printf ("som = %d \n",som_random(arr,n));
}