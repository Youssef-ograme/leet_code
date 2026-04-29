#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int random_number(int from , int to)
{
    return rand() % (to - from + 1) + from;
}

int *print_random (int n)
{
    int i = 0;
    int *numbers = malloc (n * sizeof(int));
    while (i < n)
    {
        numbers[i] = random_number(1,100);
        printf ("%d ",numbers[i]);
        i++;
    }
    return numbers;
}

int is_max (int n , int *arr)
{
    int max = arr[0];
    int i = 0 ;
    while (i < n)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        i++;
    }
    return max;
}

void print_max (int n , int *arr)
{
    int max = is_max(n,arr);
    printf ("max = %d \n",max);
}
int main ()
{
    srand(time(0));
    int n = 5;
    int *arr = print_random(n);
    print_max(n,arr);
}