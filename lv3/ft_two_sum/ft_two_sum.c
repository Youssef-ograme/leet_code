
#include <stdio.h>
#include <stdlib.h>
int check_indexes (int *arr , int nbr ,int target,int size,int index)
{
    int i = 0;
    while (i < size)
    {
        if(arr[i] + nbr == target && i != index)
            return i;
        i++;
    }
    return -1;
}

int *ft_tow_sum (int *arr , int size_arr ,int target)
{
    int i = 0 , j = 0 , val;
    int *stack = malloc (2 * sizeof(int));
    if (!stack)
        return NULL;
    while (i < size_arr)
    {
        val = check_indexes(arr,arr[i],target,size_arr,i);
        if (val != -1)
        {
            stack[0] = i;
            stack[1] = val;
            break;
        }
        i++;
    }
    return stack;
}

int main ()
{
    int arr[] = {3,2,4,122,34,56};
    int size = 6;
    int target = 6;
    int *stack = ft_tow_sum(arr,size,target);
    int i = 0;
    while (i < 2)
        printf ("%d",stack[i++]);
    free(stack);
}