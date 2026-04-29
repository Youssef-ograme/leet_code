#include <stdio.h>
int som_of_array (int *arr , int size)
{
    if (size == 0)
        return 0;
    return arr[size - 1] + som_of_array(arr,size -1);
}
int main ()
{
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    printf ("%d",som_of_array (arr, size));
}