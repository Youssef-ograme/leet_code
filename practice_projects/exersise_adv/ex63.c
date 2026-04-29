#include "headers.h"

int random_number (int from , int to )
{
    return from + rand() % (to - from + 1);
}

int *random_array_1(int n)
{
    int *arr = malloc (n * sizeof (int));
    int i= 0;
    while (i < n)
    {
        arr[i] = random_number(1,100);
        i++;
    }
    return arr;
}

void print_arr1(int n)
{
    int *arr1 = random_array_1(n);
    int i = 0;
    while (i < n)
    {
        printf ("%d ",arr1[i]);
        i++;
    }
}

int *random_array_2 (int n)
{
    int *arr = malloc (n * sizeof (int));
    int  i = 0;
    while (i < n)
    {
        arr[i] = random_number(1,100);
        i++;
    }
    return arr;
}
void print_arr2 (int n)
{
    int *arr2 = random_array_2(n);
    int i = 0;
    while (i < n)
    {
        printf ("%d ",arr2[i]);
        i++;
    }
}

void som_of_arr1_and_arr2 (int n)
{
    int *arr1 = random_array_1(n);
    int *arr2 = random_array_2(n);
    int *som = malloc (n * sizeof (int));
    int i = 0;
    while (i < n)
    {
        som[i] = arr1[i] + arr2[i];
        printf ("%d ",som[i]);
        i++;
    }
    
}

void print_som (int n)
{
    int *som = som_of_arr1_and_arr2(n);
    int i = 0;
    while (i < n)
    {
        printf ("%d ",som[i]);
        i++;
    }
}
    */

int main ()
{
    srand(time(NULL));
    int n ;
    printf ("enter number : ");
    scanf ("%d",&n);
   
    printf ("\narray 1 : ");
    print_arr1(n);
    printf ("\narray 2 : ");
    print_arr2(n);
    printf ("\nsom of arrays : ");

    som_of_arr1_and_arr2(n);
}