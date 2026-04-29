#include "headers.h"
typedef enum {prime = 1, notPrime = 2}info ;
// random number 
int random_numbers (int from , int to)
{
    return from + rand() % (to - from + 1);
}

int *random_array (int n)
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

info is_prime (int number)
{
    if (number < 2)
    {
        printf ("\n %d is not prime !\n");
        return notPrime;
    }

    int i = 2;
    while (i * i <= number)
    {
        if (number % i == 0)
        {
            return notPrime;
        }
        i++;
    }
    return prime;
}

int *check_is_prime(int n , int *len_arr)
{
    int i = 0;
    int count = 0;
    int *Parr = malloc (n * sizeof (int));
    int *arr = random_array(n);
    while (i < n)
    {
        if (is_prime(arr[i]) == prime)
        {
            Parr[count] =  arr[i];
            count++;
        }
        i++;
    }
    *len_arr = count;
    return Parr;
    // prime
}
void print_random(int n)
{
    int i = 0;
    int *arr = random_array(n);
    printf ("array element 1 : ");
    while (i < n)
    {
        printf ("%d ",arr[i]);
        i++;
    }

}
void print_prime (int n,int len_arr)
{
    printf (" \nPrime Number Array 2 : ");
    int *prime = check_is_prime(n , &len_arr);
    int i = 0;
    while (i < len_arr)
    {
        printf ("%d ",prime[i]);
        i++;
    }
}
int main ()
{
    srand(time(0));
    int n ;
    printf ("enter n : ");
    scanf ("%d",&n);
    int len_arr = 0;
    print_random(n);
    print_prime(n,len_arr);
}
