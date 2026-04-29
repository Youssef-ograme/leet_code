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

void check_random(int n , int *arr , int number)
{
    int i = 0;
    while (i < n)
    {
        if (arr[i] == number)
        {
            printf ("the number found at position : %d \n",i);
            printf ("the number found its order : %d \n",i + 1);
            return ;
        }
        i++;
    }
    printf ("number you are looking for is %d \n",number);
    printf ("the number is not found :( \n");
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
    check_random(n,arr,number);
}