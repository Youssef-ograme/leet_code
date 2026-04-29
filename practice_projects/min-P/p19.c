#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
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

int *random_copy(int n)
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

int *som_of_arrays (int n , int *arr1 , int *arr2)
{
    int *som ;
    int i = 0;
    while (i < n)
    {
        som[i] = arr1[i] + arr2[i];
        i++;
    }
    return som ;
}

void print_som (int n , int *arr1 , int *arr2)
{
    int *som = som_of_arrays(n,arr1,arr2);
    int i = 0;
    while (i < n)
    {
        printf ("%d ",som[i]);
        i++;
    }
}

void print_arrays (int n , int *arr)
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
    int n ;
    printf ("enter n : ");
    scanf ("%d",&n);
    printf ("arrays of arr1 : ");
    int *arr1 = random_arr(n);
    print_arrays(n,arr1);
    printf ("\narrays of arr2 : ");
    int *arr2 = random_copy(n);
    print_arrays(n,arr2);
    printf ("\nsom of arrays arr1 and arr2 : ");
    print_som(n , arr1, arr2);
}
