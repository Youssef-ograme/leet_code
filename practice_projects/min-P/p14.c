#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int random_info (int from , int to)
{
    return rand() % (to - from + 1) + from;
}

int *random_arr (int n)
{
    int *arr = malloc (n * sizeof (int));
    int i = 0;
    while (i < n)
    {
        arr[i] = random_info(1,100);
        printf ("%d ",arr[i]);
        i++;
    }
    return arr;
}

int is_min (int *arr , int n)
{
    int min ;
    min = arr[0];
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

void print_min (int *arr, int n)
{
    int min = is_min(arr,n);
    printf ("min = %d \n",min);
}
int main ()
{
    srand(time(NULL));
    int n ;
    printf ("enter number : ");
    scanf ("%d",&n);
    int *arr = random_arr(n);
    print_min(arr,n);
}