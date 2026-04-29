#include <stdio.h>
// 1 1 2 3 4
// 
int blabal (int *arr , int n)
{
    int i = 0;
    while (i < n)
    {
        int j = 0;
        int count = 0;
        int after = 0;
        while (j < i)
        {
            if (arr[i] == arr[j])
            {      
                after = 1;
                break;
            }
            j++;
        }

        if (after == 1)
        {
            i++;
            continue ;
        }
        int k = 0;
        while (k < n)
        {
            if (arr[i] == arr[k])
            {
                count++;
            }
            k++;
        }
        printf ("count : %d value %d \n",count,arr[i]);
        i++;
    }              
}

int main ()
{
    int n ;
    printf ("enter n : ");
    scanf ("%d",&n);
    int arr[n];
    int i = 0;
    while (i < n)
    {
        scanf ("%d",&arr[i]);
        i++;
    }
    blabal(arr,n);
}