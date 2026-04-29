#include <stdio.h>
#include <stdlib.h>

void print_arr (int count , int *arr)
{
    printf ("count : %d \n",count);
    int i = 0;
    printf ("element array : ");
    while (i < count)
    {
        printf ("%d ",arr[i]);
        i++;
    }
}

void enter_info (int number , int *arr , int count)
{
    int yes = 1;
    while (yes != 0)
    {
        printf ("enter number : ");
        scanf ("%d",&number);
        arr[count] = number;
        printf ("Do you want to add more number [0] : No [1] : Yes ? ");
        scanf ("%d",&yes);
        count++;
    }
    print_arr(count,arr);
}


int main ()
{
    int number;
    int arr[100];
    int count = 0;
    enter_info(number,arr,count);
    
}