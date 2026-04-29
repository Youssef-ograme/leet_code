#include <stdio.h>
#include <stdbool.h>
void linking (int *arr , int number ,int *count)
{
    arr[*count] = number;
    (*count)++;
}

bool is_arr_in_numbers (int *arr , int number , int *count)
{
    int i = 0 ;
    while (i < *count)
    {
        if (arr[i] == number)
        {
            return true;
        }
        i++;
    }
    return false;
}

int *copy_number (int *arr ,int *array ,int n ,int *count)
{
    int i = 0;
    while (i < n)
    {
        if (is_arr_in_numbers(arr,array[i],count) == false)
        {
            linking(arr,array[i],count);
        }
        i++;
    }
    return arr;
}

void print_arr(int n , int *arr)
{
    int i = 0;
    while (i < n)
    {
        printf ("%d ",arr[i]);
        i++;
    }
}

int main ()
{
    int arr[10];
    int array[] = {10,10,10,20,20,30,30,90,90};
    int count = 0;
    int n = 9;
    printf ("Element array :");
    print_arr(n,array);
    int *copy = copy_number(arr,array,n,&count);
    printf ("\ncopy array :");
    print_arr(count,copy);
}