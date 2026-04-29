#include "headers.h"
int read_numbers(int from ,int to)
{
    return from + rand() % (to - from + 1);
}

int *random_arrays(int n)
{
    int *arr = malloc (n * sizeof (int));
    int i = 0;
    while (i < n)
    {
        arr[i] = read_numbers(1,100);
        i++;
    }
    return arr;
}

bool is_found (int n , int number , int *arr)
{
    int i = 0;
    while (i < n)
    {
        if ( number == arr[i] )
        {
            return true;
        }
        i++;
    }
    return false;
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
    srand(time(NULL));
    int n ; 
    printf ("enter n : ");
    scanf ("%d",&n);
    int *arr = random_arrays(n);
    print_arrays(n,arr);
    int number;
    printf ("\nplase enter a number to search for : ");
    scanf ("%d",&number);

    if (is_found(n,number,arr) == 1)
    {
        printf ("Number you are looking for is : %d \n",number);
        printf ("Yes the number is found :-) \n");
    }
    else 
    {
        printf ("Number you are looking for is %d \n",number);
        printf ("no the number is not found :-( \n");
    }
}