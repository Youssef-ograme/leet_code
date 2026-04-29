#include <stdio.h>
int Recursive_Binary_Search (int *arr , int Target , int index)
{
    if (arr[index] == Target)
        return index;
    Recursive_Binary_Search(arr,Target,index + 1);
}

int main ()
{
    int arr[5] = {1,3,5,7,9};
    printf ("%d",Recursive_Binary_Search(arr,7,0));
}