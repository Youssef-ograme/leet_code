#include "headers.h"
int random_info (int from , int to)
{
    return from + rand() % (to - from + 1);
}
int *random_arrays (int n)
{
    int i = 0;
    int *arr = malloc (n * sizeof(int));
    while (i < n)
    {
        arr[i] = random_info(1,100);
        i++;
    }
    return arr;
}

int min_of_arrays (int n)
{
    int *arr = random_arrays(n);
    int j = 0;
    printf ("array Elements : ");
    while (j < n)
    {
        printf ("%d ",arr[j]);
        j++;
    }

    int min = arr[0];
    int i = 0;
    while (i < n)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        i++;
    }
    return min;

}

void print_min (int n)
{
    int min = min_of_arrays(n);
    printf ("\n Min Number is : %d\n",min);
}
int main ()
{
    srand(time(NULL));
    int n ;
    printf ("enter number : ");
    scanf ("%d",&n);
    print_min(n);
}