#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int random_number (int from , int to)
{
    return rand() % (to - from + 1) + from;
}

int *random_arr(int n )
{
    int i = 0;
    int *arr = malloc (n * sizeof (int));
    while (i < n)
    {
        arr[i] = random_number(1,100);
        i++;
    }
    return arr;
}

int check (int *arr , int n)
{
    int i = 0;
    int count = 0;
    while (i < n)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
        i++;
    }
    return count;
}

void print_info (int *arr , int n)
{
    int i = 0;
    int count = check(arr,n);
    
    printf ("Array Element : ");
    while (i < n)
    {
        printf ("%d ",arr[i]);
        i++;
    }
    if (count == 0)
    {
        printf ("\n NO Is Not found \n");
        return ;
    }
    printf ("\nEven Numbers count is : ");
    printf ("%d",count);
}

int main ()
{
    srand (time(NULL));
    int n ;
    printf ("enter size : ");
    scanf("%d",&n);
    int *arr = random_arr(n);
    print_info(arr,n);
}
