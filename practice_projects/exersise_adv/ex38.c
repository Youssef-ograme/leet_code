#include "headers.h"

/*int read_numbers (int arr[],int n)
{
    printf ("enter the numbers : \n");
    int i = 0;
    while (i < n)
    {
            read_info(&arr[i]);
        i++;
    }
}

void print_numbers (int arr[] ,int n)
{
    int i ;
    i = n - 1;
    while (i >= 0)
    {
        printf ("%d \n",arr[i]);
        i--;
    }
}

int main ()
{
    int n;
    int *arr = malloc (n * sizeof (arr));
    read_info(&n);
    read_numbers(arr,n);
    print_numbers(arr,n);
    free(arr);
}*/

int read_numbers (char *message)
{
    int a = 0;
    do 
    {
        printf ("%s",message);
        scanf ("%d",&a);
    } while (a <= 0);
    return a;
}
void print_degits (int number)
{
    int  Remainder;
    while (number > 0)
    {
        Remainder = number % 10;
        number /= 10;
        printf ("--> %d\n",Remainder);
    }
}
int main ()
{
    int res = read_numbers("enter numbers : ");
    print_degits(res);
}