#include <stdio.h>
#include <stdlib.h>
int random_numbers(int from , int to)
{
    return rand() % (to - from + 1) + from;
}

void random_matrix(int arr[3][3])
{
    int i = 0;
    while (i < 3)
    {
        int j = 0;
        while (j < 3)
        {
            arr[i][j] = random_numbers(1,100);
            j++;
        }
        i++;
    }
}
void print_matrix(int arr[3][3])
{
    int i = 0;
    while (i < 3)
    {
        int j = 0;
        while (j < 3)
        {
            printf ("%d     ",arr[i][j]);
            j++;
        }
        printf ("\n");
        i++;
    }
}

int som_of_matrix (int arr[3][3] , int col)
{
    int som = 0 ;
    int i = 0;
    while (i < 3)
    {
        som = som + arr[i][col];
        i++;
    }
    return som;
}

int *linking_som (int arr[3][3])
{
    int i = 0;
    int *array = malloc (3 * sizeof(int));
    while (i < 3)
    {
        array[i] = som_of_matrix(arr,i);
        i++;
    }
    return array;
}

void print_som (int arr[3][3])
{
    int *array = linking_som(arr);
    int i = 0;
    while (i < 3)
    {
        printf ("som %d = %d\n",i + 1,array[i]);
        i++;
    }
    free(array);
}

int main ()
{
     int arr[3][3];
     random_matrix(arr);
     print_matrix(arr);
     print_som(arr);
}
