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

void print_array (int n , int *arr)
{
    int i = 0;
    while (i < n)
    {
        printf ("%d ",arr[i]);
        i++;
    }
}

void copy_array (int *arr , int n)
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
    srand(time(NULL));
    int n = 5;
    int *arr = random_arr(5);
    printf ("\nArray 1 elements:\n");
    print_array(n,arr);
    printf ("\nArray 2 elements after copy:\n");
    copy_array(arr,n);
}