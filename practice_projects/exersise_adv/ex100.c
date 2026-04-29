#include <stdio.h>
#include <stdlib.h>
int *array_in_malloc ()
{
    int *arr = malloc (5 * sizeof(int));
    int temp[5] = {1,2,3,4,5};
    int i = 0;
    while (i < 5)
    {
        arr[i] = temp[i];
        i++;
    }
    return arr;
}

int *change_value ()
{
    int *arr = array_in_malloc();
    int i = 0;
    int *temp = malloc (5 * sizeof(int));
    while (i < 5)
    {
        arr[i] = 20;
        temp[i] = arr[i];
        i++;
    }
    return temp;
}

int *change_valus ()
{
    int *arr = change_value();
    int *temp = malloc (5 * sizeof(int));
    int i = 0;
    while (i < 5)
    {
        arr[1] = 40;
        arr[3] = 33;
        arr[0] = 90;
        temp[i] = arr[i];
        i++;
    }
    return temp;
}

void print_arrays (int *arr)
{
    int i = 0;
    while (i < 5)
    {
        printf ("%d ",arr[i]);
        i++;
    }
    printf ("\n");
}
int main ()
{
    int *arrM = array_in_malloc();
    printf ("Initial malloc \n");
    print_arrays(arrM);
    int *arrCH = change_value();
    printf ("updated malloc \n");
    print_arrays(arrCH);
    int *arrV = change_valus();
    printf ("updated malloc 2 \n");
    print_arrays (arrV);
    free(arrM);
}