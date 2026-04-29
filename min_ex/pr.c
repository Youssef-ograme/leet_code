#include <stdio.h>
// 8 3 2 12  16 18 5 20 6
// 0  1 2 3   4 5 6  7 8

void ft_swap (int *a , int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void ft_sort (int *arr , int len)
{
    int i = 0;
    while (i < len)
    {
        int j = i;
        while (j > 0)
        {
            if (arr[j - 1] < arr[j])
            {
                ft_swap(&arr[j - 1],&arr[j]);
            }
            j--;
        }
        i++;
    }
}

int main ()
{
    int arr[6] = {3,1,2,4,0,100};
    int len = 6;
    ft_sort(arr,len);
    int i = 0;
    while (i < len)
    {
        printf ("%d ",arr[i]);
        i++;
    }

}