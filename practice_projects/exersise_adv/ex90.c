#include <stdio.h>
void swap (int *a , int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void ft_sort (int *arr , int n)
{
    int i = 0;
    int j ;
    while (i < n)
    {
        j = 0 ;
        while (j < n - i - 1)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }

            j++;
        }h
        i++;
    }
}

int main ()
{
    int n ;
    printf("enter size : ");
    scanf ("%d",&n);
    int arr[n];
    printf ("enter arrays : \n");
    int i = 0;
    while (i < n)
    {
            scanf ("%d",&arr[i]);
            i++;
    }
    i = 0;
    ft_sort(arr,n);
    while (i < n)    
    {
        printf ("%d ",arr[i]);
        i++;
    }
}