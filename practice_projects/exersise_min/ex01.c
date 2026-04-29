#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RED         "\033[1;31m"
#define GREEN       "\033[1;32m"
#define YELLOW      "\033[1;33m"
#define BROWN       "\033[0;33m"
#define RESET       "\033[0m"
#define BLUE        "\033[0;34m"
#define CYAN        "\033[0;36m"
#define BMAGENTA    "\033[1;35m"

int random_numbers (int  from , int to)
{
    return rand() % (to - from + 1) + from;
}

int is_prime (int nb)
{
    if (nb < 2)
    {
        return 0;
    }
    int i = 2 ;
    while (i * i <= nb)
    {
        if (nb % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

void random_matrix (int arr[3][3])
{
    int i = 0;
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

void print_matrix (int arr[3][3])
{
    printf ("color prime numbers     : \033[42m[   ]\033[0m\n");   
    printf ("color not prime numbers : \033[41m[   ]\033[0m\n\n");
    int i = 0;
    int j ;
    while (i < 3)
    {
        j = 0;
        while (j < 3)
        {
            if (is_prime(arr[i][j]) == 1)
            {
                printf ("\033[42m[%d]\033[0m",arr[i][j]);
            }
            else 
            {
                printf ("\033[41m[%d]\033[0m",arr[i][j]);
            }
            j++;
        }
        printf ("\n");
        i++;
    }
}
int matirx_som (int arr[3][3], int row)
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

void som_of_matrix (int arr[3][3])
{
    int i = 0;
    while (i < 3)    
    {
        printf ("row %d : som %d \n",i + 1,matirx_som(arr,i));
        i++;
    }
}

int matrix_MAX (int arr[3][3], int row )
{
    int max = arr[row][0];
    int i = 0;
    while (i < 3)
    {
        if (arr[row][i] > max)
        {
            max = arr[row][i];
        }
        i++;
    }
    return max;
}


int *link_max_value(int arr[3][3])
{
    int *array = malloc (3 * sizeof (int));
    int i = 0;
    while (i < 3)
    {
        array[i] = matrix_MAX(arr,i);
        i++;
    }
    return array;
}

int check_max_value(int arr[3][3])
{
    int *array = link_max_value(arr);
    int max = array[0];
    int i = 0;
    while (i < 3)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        i++;
    }
    free(array);
    return max;
}

int matrix_MIN (int arr[3][3],int row)
{
    int min = arr[row][0];
    int i = 0;
    while (i < 3)
    {
        if (arr[row][i] < min)
        {
            min = arr[row][i];
        }
        i++;
    }
    return min;
}

int *link_min_value (int arr[3][3])
{
    int *arrays = malloc (3 * sizeof (int));
    int i = 0;
    while (i < 3)
    {
        arrays[i] = matrix_MIN(arr,i);
        i++;
    }
    return arrays;
}

int check_min_value (int arr[3][3])
{
    int *arrays = link_min_value(arr);
    int min = arrays[0];
    int i = 0;
    while (i < 3)
    {
        if (arrays[i] < min)
        {
            min = arrays[i];
        }
        i++;
    }
    free(arrays);
    return min;
}

void place_min_and_min (int arr[3][3])
{
    int max_value = check_max_value(arr);
    int min_value = check_min_value(arr);
    int i = 0;
    int j ;
    while (i < 3)
    {
        j = 0;
        while (j < 3)
        {
            if (arr[i][j] == max_value)
            {
                printf ("\033[33m[%d]\033[0m",arr[i][j]);
            }
            else if (arr[i][j] == min_value)
            {
                printf ("\033[34m[%d]\033[0m",arr[i][j]);
            }
            else
            {
                printf ("\033[m[%d]\033[0m",arr[i][j]);
            }
            j++;
        }
        printf ("\n");
        i++;
    }
}
void print_ROW_max_min (int arr[3][3])
{
    printf ("\n\033[45mMAXRows\033[0m \n");
   int i = 0;
   while (i < 3)
   {
        printf ("row : %d max : %d \n",i + 1 , matrix_MAX(arr,i));
        i++;
   }
   printf ("------------\n");
   printf ("\n\033[45mMINRows\033[0m \n");
   i = 0;
   while (i < 3)
   {
        printf ("row : %d min : %d \n",i + 1 , matrix_MIN(arr,i));
        i++;
   }
    printf ("------------\n");
}

void print_max_value (int arr[3][3])
{
    int max = check_max_value(arr);
    printf("\033[33mmax value : \033[0m%d \033[43m   \033[0m\n",max);
    int min = check_min_value(arr);
    printf("\033[34mmin value : \033[0m%d  \033[44m   \033[0m\n\n",min);
    
}

int main ()
{
    srand(time(NULL));
    int arr[3][3];
    random_matrix(arr);
    print_matrix(arr);
    printf ("\n\033[45mSOM Rows\033[0m \n");
    som_of_matrix(arr);
     print_ROW_max_min(arr);
    print_max_value(arr);
    place_min_and_min(arr);

}