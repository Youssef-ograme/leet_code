#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
int random_arr (int from , int to)
{
    return rand() % (to - from + 1) + from;
}

bool is_prime(int nb)
{
    if (nb < 2)
    {
        printf ("no is not prime ");
        return false;
    }
    int i = 2;
    while (i * i <= nb)
    {
        if (nb % i == 0)
        {
            return false;
        }
        i++;
    }
    return true;
}

int *random_array (int n)
{
    int *arr = malloc (n * sizeof (int));
    int i = 0;
    while (i < n)
    {
        arr[i] = random_arr(1,100);
        i++;
    }
    return arr;
}

void linking (int *arr , int number , int *count)
{
    arr[*count] = number;
    (*count)++;
}



int *random_copy (int *arr1 , int *arr2 , int n , int *count)
{
    int i = 0;
    while (i < n)
    {
        if (is_prime(arr2[i]) == true)
        {
            linking(arr1,arr2[i],count);
        }
        i++;
    }
    return arr1;
}

void print_arrays(int n , int *arr)
{
    int i = 0;
    while (i < n)
    {
        printf("%d ",arr[i]);
        i++;
    }
}

int main ()
{
    srand(time(NULL));
    int n ;
    printf ("enter n : ");
    scanf ("%d",&n);
    int *arr2 = random_array(n);
    int arr1[100];
    int count = 0;
    int *arr_c = random_copy(arr1,arr2,n,&count);
    printf ("element array : ");
    print_arrays(n,arr2);
    printf("\nelement odd : ");
    print_arrays(count,arr_c);
}