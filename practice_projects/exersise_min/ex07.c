#include <stdio.h>
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

void swap_matrix (int array[3][3],int arr[3][3])
{
    int i = 0;
    while (i < 3)
    {
        int j = 0;
        while (j < 3)
        {
            array[j][i] = arr[i][j];
            j++;
        }
        i++;
    }
}

int main ()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int array[3][3];
    print_matrix(arr);
    swap_matrix(array,arr);
    print_matrix(array);
}