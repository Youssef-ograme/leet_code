#include <stdio.h> 
#include <stdlib.h>

int *check_check (int *arr , int target , int size )
{
    int i = 0;
    int j;
    int k = 0;
    int *tab = malloc (2 * sizeof (int));
    if (tab == NULL)
    {
        return NULL;
    }
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (arr[i] + arr[j] == target)
            {
                    tab[0] = i;
                    tab[1] = j;
                    return tab;
            }
            j++;
        }
        i++;
    }
    free(tab);
    return NULL;
}

int main ()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof (arr) / sizeof (arr[0]);
    int target = 19;
    int *tab = check_check (arr,target, size);
    int size_tab = sizeof (tab) / sizeof (tab[0]);
        int i = 0;
        printf ("[");
        while (i < size_tab)
        {
            printf (" %d ",tab[i]);
            i++;
        }
        printf ("]");
    
}