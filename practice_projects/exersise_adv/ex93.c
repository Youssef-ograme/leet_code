#include <stdio.h>
void arrays_of_pointers (int *arr , int size)
{
    void *ptr = arr;
    int i = 0;
    while (i < size)
    {
        printf ("%p adress of value %d \n",ptr , *(int*)ptr);
        ptr = (int*)ptr + 1;
        i++;
    }
}
int main ()
{
    int size ;
    printf ("enter size : ");
    scanf ("%d",&size);
    int arr[size];
    int i = 0;
    while (i < size)
    {
        scanf ("%d",&arr[i]);
        i++;
    }
    arrays_of_pointers(arr,size);
}