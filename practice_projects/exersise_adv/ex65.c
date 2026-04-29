#include "headers.h"

void ft_swap (int *a , int *b)
{
    int temp ;
    temp = *a;
    *a = *b ;
    *b = temp;
}

int *read_numbers (int n)
{
    int *arr = malloc (n * sizeof (int));
    int i = 0;
    while (i < n)
    {
        arr[i] =  i + 1;
        i++;
    }
    return arr;
}

int random_number (int from, int to )
{
    return from + rand() % (to - from + 1);
}

void swap_array (int *arr , int n)
{
    int i = 0;
    while (i < n)
    {
        ft_swap(&arr[ random_number(0,n - 1)],&arr[ random_number(0,n - 1)]);
        i++;
    }
}

void print_arrays (int *arr , int n)
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
    int n ;
    printf ("enter n : ");
    scanf ("%d",&n);
    int *arr = read_numbers(n);
    printf("\narrays 1 to n : ");
    print_arrays(arr,n);

    swap_array(arr,n);

    printf ("\narray after : ");
    print_arrays(arr,n);

}