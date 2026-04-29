#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_numbers(int from , int to)
{
    return rand() % (to - from + 1) + from ;
}

int *random_arr(int n)
{
    int *arr = malloc (n * sizeof (int));
    int i = 0;
    while (i < n)
    {
        arr[i] = random_numbers(1,100);
        i++;
    }
    return arr;
}

int som_array (int *arr , int n)
{
    int i = 0;
    int som = 0;
    while (i < n)
    {
        som = som + arr[i];
        i++;
    }
    return som ;
}

int average_array (int n , int *arr)
{
    int som = som_array(arr,n);
    int average ;
    average = som / n;
    return average;
}

void print_average (int *arr , int n)
{
    int average = average_array(n,arr);
    printf("\naverage : %d \n",average);
}

int main ()
{
    srand(time(NULL));
    int n ;
    printf ("enter n : ");
    scanf ("%d",&n);
    int *arr = random_arr(n);
    printf ("array : ");
    int i = 0;
    while (i < n)
    {
        printf ("%d ",arr[i]);
        i++;
    }
    print_average(arr,n);
}