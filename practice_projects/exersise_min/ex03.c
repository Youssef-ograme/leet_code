#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int random_numbers (int from , int to)
{
    return rand() % (to - from + 1) + from;
}

void random_matrix (int arr[3][3])
{
    int i = 0;
    while (i < 3)
    {
        int j = 0 ;
        while (j < 3)
        {
            arr[i][j] = random_numbers(1,100);
            j++;
        }
        i++;
    }
}

int som_of_matrix(int arr[3][3] , int row )
{
    int i = 0;
    int som = 0;
    while (i < 3)
    {
        som = som + arr[row][i];
        
        i++;
    }

    return som;
}

int     *array_of_matrix(int arr[3][3])
{
    int i = 0 ;
    int *som = malloc (3 * sizeof(int));

    while (i < 3)
    {
        som[i] = som_of_matrix(arr,i);
        i++;
    }
    return som;
}

void print_som (int arr[3][3])
{
    int *som = array_of_matrix(arr);
    int i = 0;
    while (i < 3)
    {
        printf ("som : %d \n",som[i]);
        i++;
    }
    free(som);
}

int main ()
{
    int arr[3][3];
    random_matrix(arr);
    print_som(arr);
}
