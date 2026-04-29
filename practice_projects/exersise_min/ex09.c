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

void print_array (int arr[3][3])
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

void print_Row_matrix (int arr[3][3])
{
    int i = 0;
    while (i < 3)
    {
        printf ("%d     ",arr[1][i]);
        i++;
    }
    printf ("\n");
    i = 0;
    while (i < 3)
    {
        printf("%d     ",arr[i][1]);
        i++;
    }
}

int main ()
{
    srand(time(NULL));
    int arr[3][3];
    random_matrix_1(arr);
    print_array(arr);
    printf ("\n-----------------\n");
    print_Row_matrix(arr);
}