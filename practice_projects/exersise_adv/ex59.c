#include "headers.h"
int random_numbers(int from , int to)
{
    return from + rand() % (to - from + 1);
}

int *random_arrays (int n)
{
    int i = 0;
    int *arr = malloc (n * sizeof(int));
    while (i < n)
    {
        arr[i] = random_numbers(1,10);
        i++;
    }
    return arr;
}

int som_of_arrays (int n)
{
    int *arr = random_arrays(n);
    int j = 0;
    while (j < n)
    {
        printf ("%d ",arr[j]);
        j++;
    }
    int som = 0 ;
    int i = 0;
    while (i < n)
    {
        som = som + arr[i];
        i++;
    }
    return som ;
}

int average_of_som (int n)
{
    int som = som_of_arrays(n);
    printf ("\n som = %d \n",som);
    int average = som / n;
    return average;
}
int main ()
{
    srand(time(NULL));
    int n;
    printf ("enter size : ");
    scanf ("%d",&n);
    printf (" \n average : %d",average_of_som(n));
}