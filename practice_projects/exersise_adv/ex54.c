#include "headers.h"
int *arr_of_digits (int n)
{
    int *arr = malloc (n * sizeof(int));
    int i = 0;
    while (i < n)
    {
        printf ("enter numbers %d : ",i + 1);
        scanf ("%d",&arr[i]);
        i++;
    }
    return arr;
}

void print_arr (int n)
{
    int a ;
    int *arr = arr_of_digits(n);
    printf ("enter the number you want check : ");
    scanf ("%d",&a);
    int i = 0;
    int count = 0 ;
    int j = 0;
    while (i < n)
    {
        if (arr[i] == a)
        {
            count++;
        }
        i++;
    }
    // print arrays 
    printf ("original arrays : ");
    while (j < n)
    {
        printf ("%d",arr[j]);
        j++;
    }

    printf ("\n%d is repeated %d time (s) \n",a,count);
}

int main ()
{
    int n ;
    printf ("enter n : ");
    scanf ("%d",&n);
    print_arr(n);
}