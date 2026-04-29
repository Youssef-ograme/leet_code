#include <stdio.h>
#include <stdlib.h>
int swap(int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort (int *arr , int size)
{
    int i = 0 , j ;
    while (i < size)
    {
        j = 0;
        while (j < size)
        {
            if (arr[i] < arr[j])
                swap(&arr[i] , &arr[j]);
            j++;
        }
        i++;
    }
}
int *ft_merge(int *a, int size_a, int *b, int size_b)
{
    int size = size_a + size_b;
    int *stack = malloc (size * sizeof(int));
    if(!stack)
        return NULL;
    int i = 0 , j = 0 ,k = 0;
    while (i < size_a)
        stack[j++] = a[i++];
    i = 0;
    while (i < size_b)
        stack[j++] = b[i++];
    sort(stack,size);
    return stack;
}

int main ()
{
    int a[] = {1,3,5};
    int b[] = {2,4,6};
    int size_a = 3;
    int size_b = 3;
    int *arr = ft_merge(a,size_a,b,size_b);
    int size = size_a + size_b;
    int i = 0;
    while (i < size)
        printf ("%d",arr[i++]);
}