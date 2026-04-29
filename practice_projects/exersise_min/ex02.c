#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void yyswap (int *a , int *b)
{
    int temp;
    temp = *a ;
    *a = *b;
    *b = temp;
}
int random_numbers (int from , int to)
{
    if (from > to)
    {
        yyswap(&to,&from);
    }
    return rand() % (to - from + 1) + from;
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

void matrix_random (int arr[3][3])
{
    int i = 0;
    while (i < 3)
    {
        int j = 0;
        while (j < 3)
        {
            arr[i][j] = random_numbers(100,1);
            j++;
        }
        i++;
    }
}

int som_of_matrix1 (int arr[3][3] , int rew)
{
    int i = 0;
    int som = 0;
    while (i < 3)
    {
        som = som + arr[rew][i];
        i++;
    }
    return som;
}

int som_of_matrix2 (int arr[3][3] , int col)
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

void som_Rows (int arr[3][3])
{
    int i = 0;
    while (i < 3)
    {
        printf ("som %d \n",som_of_matrix1(arr,i));
        i++;
    }
}

void som_coloms (int arr[3][3])
{
    int i = 0;
    while (i < 3)
    {
        printf ("som %d \n",som_of_matrix2(arr,i));
        i++;
    }
}

int Total_principal_diameter (int arr[3][3])
{
    int i = 0;
    int som = 0;
    while (i < 3)
    {
        som = som + arr[i][i];
        i++;
    }
    return som;
}

int som_The_secondary_train (int arr[3][3])
{
    int j = 0;
    int som = 0 ;
    while (j < 3)
    {
        som = som + arr[j][2 - j];    
        j++;
    }
    return som ;
}

int som_of_matrix (int arr[3][3])
{
    int i = 0;
    int som = 0 ;
    while (i < 3)
    {
        int j = 0;
        while (j < 3)
        {
            som = som + arr[i][j];
            j++;
        }
        i++;
    }
    return som;
}

void The_main_train (int arr[3][3])
{

        printf ("Total principal diameter : %d \n",Total_principal_diameter(arr));
        printf ("total The secondary train :  %d \n",som_The_secondary_train(arr));
        printf ("The sum of all elements of the matrix :  %d \n",som_of_matrix(arr));
}

void Menu ()
{
    printf (" 1 : link random array : \n");
    printf (" 2 : print random array : \n");
    printf (" 3 : print som of Rows  : \n");
    printf (" 4 : print som of coloms : \n");
    printf (" 5 : print som of the cat : \n");
    printf (" 0 : exit : \n");
}

void link_programe (int arr[3][3])
{
    matrix_random(arr);
    print_matrix(arr);
    printf ("som Rows : \n\n");
    som_Rows(arr);
    printf("som coloms : \n\n");
    som_coloms(arr);
    printf ("The main train : \n");
    The_main_train(arr);
}

void start_programe (int arr[3][3])
{
    int nb ;
    do 
    {
        Menu();
        printf ("enter numbers for menu : \n");
        scanf ("%d",&nb);
        if (nb == 1)
        {
            
        }

    }while (nb == 0)
}

