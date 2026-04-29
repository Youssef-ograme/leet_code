#include <stdio.h>
void void_pointers_of_arrays (int *arr , int n)
{
    int i = 0;
    void *ptr = arr;
    while (i < n)
    {
        printf ("%d ",*(inth*)ptr);

        ptr = (int*)ptr + 1;
        i++;
    }
}
int main ()
{
    int arr[10] = {11,22,33,44,55,66,77};
    int n = 7;
    void_pointers_of_arrays(arr,n);
}