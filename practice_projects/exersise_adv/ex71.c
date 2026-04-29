#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random_number (int from , int to)
{
    return rand() % (to - from + 1) + from ;
}

int *random_array (int n)
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

void linking (int *arr1 , int number  , int *count)
{
    arr1[*count] = number;
    (*count)++;
}

int *random_copy (int *arr1,int *arr2 ,int n, int *count)
{
    int i = 0;
    while (i < n)
    {
        linking(arr1,arr2[i],count);
        i++;
    }
    return arr1;
}

void print_arrays(int n , int *arr)
{
    int i = 0;
    while (i < n)
    {
        printf("%d ",arr[i]);
        i++;
    }
}

int main ()
{
    srand(time(NULL));
    int n ;
    printf ("enter n : ");
    scanf ("%d",&n);
    int count = 0;
    int *arr2 = random_array(n);
    int arr1[100];
    int *copy_arr = random_copy(arr1,arr2,n,&count);
    printf ("element array : ");
    print_arrays(n,arr2);
    printf("\nelement copy array : ");
    print_arrays(n,copy_arr);
}
