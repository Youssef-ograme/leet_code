#include "headers.h"

int random_info(int from , int to)
{
    int randomin = rand() % (to - from + 1) + from;
    return randomin;
}
int *print_random (int n)
{
    int *arr = malloc (n * sizeof(int));
    int j = 0;
        while (j < n)
        {
            arr[j] = random_info(1,100);
            j++;
        }
        return arr;
}

int check_max (int n)
{
    int *arr = print_random(n);
    printf ("arrays of random : \n");
    int j = 0;
    while (j < n)
    {
        printf("%d ",arr[j]);
        j++;
    }
    
    int max = arr[0];
    int i = 0;
    while(i < n)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        i++;
    }
    return max;
}

void print_max (int n)
{
    
    int max = check_max(n);
    printf ("\n max of arrays : %d \n",max);
}

int main ()
{
    srand(time(NULL));
    int i = 0;
    int n ;
    printf ("enter number : ");
    scanf ("%d",&n);
    print_max(n);
}