#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int random_numbers(int from , int to)
{
    return rand() % (to - from + 1) + from ;
}

bool is_prime (int nbr , int n)
{
    if (nbr < 2)
    {
        printf ("is not prime !\n");
        return false;
    }

    int i = 2;
    while (i * i <= nbr)
    {
        if (nbr % i == 0)
        {
            return false;
        }
        i++;
    }
    return true;
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
        if (is_prime(arr[i] , n) == true)
        {
            printf ("%d ",arr[i]);
        }
        i++;
    }
}

int main ()
{
    srand(time(NULL));
    int n = 10;
    int *arr = random_arr(n);
    printf ("\nArray 1 elements:\n");
    print_array(n,arr);
    printf ("\nArray prime 2 elements after copy:\n");
    copy_array(arr,n);
}