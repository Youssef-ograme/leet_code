#include "headers.h"
int random_number (int from , int to)
{
    return rand() % (to - from + 1) + from;
}

int *random_array(int n)
{
    int *array = malloc (n * sizeof(int));
    int i = 0;
    while (i < n)
    {
        array[i] = random_number(1,100);
        i++;
    }
    return array;
}

int *revers_arrays (int *arr , int n)
{
    int i = 0;
    while (i < n / 2)
    {
        int temp ;
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
        i++;
    }
    return arr;
}

void print_array (int n , int *arr)
{
    int i = 0 ;
    while (i < n)
    {
        printf ("%d ",arr[i]);
        i++;
    }
}

void post_revers_in_random (int n)
{
    int *arr = random_array(n);
    printf("before revers : ");
    print_array(n,arr);
    int *array = revers_arrays(arr,n);
    printf ("\nAfter revers :  ");
    print_array(n,array);
}

int main ()
{
    int n ;
    printf ("enter n : ");
    scanf ("%d",&n);
    post_revers_in_random(n);
}