#include "headers.h"

typedef enum {
    prime = 1 , notPrime = 0
} info ;

int random_numbers(int from , int to)
{
    return from + rand() % (to - from + 1);
}

info is_prime(int number)
{
    if (number < 2)
    {
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

int *random_array (int n )
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

int *check_is_prime (int*arr,int n,int *size)
{
    int count = 0;
    int *Priarr = malloc (n * sizeof (int));
    int i = 0;
    while (i < n)
    {
        if (is_prime(arr[i]) == prime)
        {
            Priarr[count] = arr[i];
            count++;
        }
        i++;
    }
    *size = count;
    return Priarr;
}

void print_random(int *arr , int n )
{
    int i = 0;
    while (i < n)
    {
        printf ("%d ",arr[i]);
        i++;
    }
}
void print_primes (int *arr , int size)
{
    int i = 0;
    while (i < size)
    {
        printf ("%d ",arr[i]);
        i++;
    }
}

void Evidence_Center ()
{
    int n ;
    printf ("input : ");
    scanf ("%d",&n);
    int *arr = random_array(n);
    int size = 0; 
    printf ("array 1 element : ");
    print_random(arr,n);
    int *primeN = check_is_prime(arr,n,&size);
    printf ("\nPrime Numbers in Array 2 : \n");
    print_primes(primeN,size);
    
}
int main()
{
    srand(time(NULL));
   Evidence_Center();
}
