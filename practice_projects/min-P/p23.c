#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int random_numbers(int from , int to)
{
    return rand() % (to - from + 1) + from ;
}

int *read_numbers (int n)
{
    int *arr = malloc (n * sizeof(int));
    int i = 0;
    while (i < n)
    {
        arr[i] = random_numbers(1,100);
        i++;
    }
    return arr;
}
// check in index random numbers

int check_random (int *arr,int search , int n)
{
    int i = 0;
    while (i < n)
    {
        if (arr[i] == search)
        {
            printf ("Number you are looking for is : %d \n",search);
            printf ("The number found at position : %d \n",i);
            printf ("The number found its order : %d \n",i + 1);
            return 0;
        }
        i++;
    }
    return - 1;
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
    int *arr = read_numbers(size);
    print(size,arr);
    printf ("\nPlase enter a number to search for ? ");
    scanf ("%d",&search);
    int output = check_random(arr,search,size);
    if (output == -1)
    {
        printf ("Number you are looking for is : %d \n",search);
        printf ("The number is not found :-( \n");
    }
}