#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random_numbers(int from , int to)
{
    return rand() % (to - from + 1) + from;
}

void random_matrix (int arr[3][3])
{
    int i = 0 ;
    int j ;
    while (i < 3)
    {   
        j = 0;
        while (j < 3)
        {
            arr[i][j] = random_numbers(1,100);
            j++;
        }
        i++;
    }
}

int som_of_matrix (int arr[3][3],int col)
{
    int i = 0;
    int som = 0;
    while (i < 3)
    {
        som = som + arr[i][col];
        i++;
    }
    return som;
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

void print_som_of_matrix(int arr[3][3])
{
    int i= 0 ;
    while (i < 3)
    {
        printf ("col %d som %d \n",i + 1, som_of_matrix(arr,i));
        i++;
    }
}

int main ()
{
    int arr[3][3];
    random_matrix(arr);
    print_matrix(arr);
    print_som_of_matrix(arr);
}