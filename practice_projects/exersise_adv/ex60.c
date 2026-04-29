#include "headers.h"
int random_numbers(int from , int to)
{
    return from + rand() % (to - from + 1);
}

int *random_arrays (int n)
{
    int i = 0;
    int *arr = malloc (n * sizeof(int));
    while (i < n)
    {
        arr[i] = random_numbers(1,10);
        i++;
    }
    return arr;
}
int *print_array (int n )
{
    int *arr = random_arrays(n);
    int i = 0 ;
    printf ("\n print array : ");
    while(i < n)
    {
        printf ("%d ",arr[i]);
        i++;
    }
    return arr;
}

void copy_array (int n)
{
    int *arr = print_array(n);
    int i = 0; 
    printf ("\n copy array : ");
    while (i < n)
    {
        printf ("%d ",arr[i]);
        i++;
    }
} 
int main ()
{
    srand(time(NULL));
    copy_array(5);
}