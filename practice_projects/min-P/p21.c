#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int random_numbers(int from , int to)
{
    return rand() % (to - from + 1) + from ;
}

int *read_numbers (int n)
{
    int *arr = malloc (n * sizeof(int));
    int i = 0;
    while (i < n)
    {
        arr[i] = random_numbers(1,100);
        i++;
    }
    return arr;
}

int *revers_random (int *arr , int n)
{
    int revers;
    int i = 0;
    while (i < n / 2)
    {
        revers = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = revers;
        i++;
    }
    return arr;
}

void print_revers (int n , int *arr)
{
    int i = 0;
    while (i < n)
    {
        printf ("%d ",arr[i]);
        i++;
    }
}

int main ()
{
    srand (time(NULL));
    int n = 10;
    int *arr = read_numbers(n);
    print_revers(n,arr);
    printf ("\n");
    int *revers = revers_random(arr,n);
    print_revers(n,revers);
}

