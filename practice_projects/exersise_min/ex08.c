#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_numbers(int from , int to)
{
    return rand() % (to - from + 1) + from ;
}

void random_matrix_1(int arr[3][3])
{
    int i = 0;
    while (i < 3)
    {
        int j = 0;
        while (j < 3)
        {
            arr[i][j] = random_numbers(1,10);
            j++;
        }
        i++;
    }
}

void multiply_matrix (int array1[3][3] , int array2[3][3] , int som[3][3])
{
    int i = 0;
    while (i < 3)
    {
        int j = 0;
        while (j < 3)
        {
            som[i][j] = array1[i][j] * array2[i][j];
            j++;
        }
        i++;
    }
}

void print_matrix (int arr[3][3])
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

int main ()
{
    int array1[3][3];
    int array2[3][3];
    int result[3][3];
    random_matrix_1(array1);
    print_matrix(array1);
    printf ("\n--------------------\n");
    random_matrix_1(array2);
    print_matrix(array2);
    printf ("\n--------------------\n");
    multiply_matrix(array1,array2,result);
    print_matrix(result);
}