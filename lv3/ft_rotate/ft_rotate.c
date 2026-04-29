// [12345] k = 3
// [54312]
// size  = 3 - 1 = 2 
#include <stdio.h>
void  ft_rotate(int *arr, int size, int k)
{
    //12345 --> 32145
    if (k > size)
        k %= size;
    int ness = size - k;
    //          5 - 2 = 3
    // 3 / 2 = 2
    int i = 0 , temp;
    while (i < ness / 2)
    {
        temp = arr[i];
        arr[i] = arr[ness - 1 - i];
        arr[ness - 1 - i] = temp;
        i++;
    }
    // ness 3
    //printf ("%d",ness);
    i = 0;
    while (i < k / 2)
    {
       temp = arr[ness];
       arr[ness] = arr[size - 1];
       arr[size - 1] = temp;
       ness++;
       i++;
    }
    
    i = 0;
    while (i < size / 2)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
        i++;
    }
    if (k < 0)
    {
        i = 0;
        while (i < size)
        {
            if (arr[i] < 0)    
                arr[i] = -arr[i];
            i++;
        }
    }
}
int main ()
{
    int arr[] = {1,2,3,4,5};
    int size  = 5;
    int k = -1;
    ft_rotate(arr,size,k);
    int i = 0;
    while (i < size)
    {
        printf ("%d",arr[i]);
        i++;
    }
}