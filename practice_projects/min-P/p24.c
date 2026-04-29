#include <stdio.h>

#include <stdlib.h>
 #include <time.h>
#include <stdbool.h>

int random_numbers(int from , int to)
{
    return rand() % (to - from + 1) + from ;
}

int *random_array(int n)
{
    int *arr = malloc (n * sizeof (int));
    int i = 0;
    while (i < n)
    {
        arr[i] = random_numbers(1,100);
        i++;
    }
    return arr;
}

bool check (int *arr , int n , int search)
{
    int i = 0;
    while (i < n)
    {
        if (arr[i] == search)
        {
            return true;
        }
        i++;
    }
    return false;
}

void check_random (int *arr , int n , int search)
{
    if (check(arr,n,search) == true)
    {
        printf ("Number you are looking for is : %d \n",search);
        printf ("Yes , The number is found :-) \n");
    }
    else 
    {
        printf ("Number you are looking for is : %d \n",search);
        printf ("No , The number is not found :-( \n");
    }
}

void print (int n , int *arr)
{
    int i = 0;
    while (i < n)
    {
        printf("%d ",arr[i]);
        i++;
    }
}

int main ()
{
     int size ;
    int search ;
    // input 
    printf("enter size : ");
    scanf ("%d",&size);
    // search
    int *arr = random_array(size);
    print(size,arr);
    printf ("\nPlase enter a number to search for ? ");
    scanf ("%d",&search);
    check_random(arr,size,search);
}