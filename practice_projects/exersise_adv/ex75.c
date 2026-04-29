#include <stdio.h>
#include <stdbool.h>
bool is_pylandrom (int *arr , int count)
{
    int i = 0;
    while (i < count / 2)
    {
        if (arr[i] != arr[count - i - 1])
        {
            return false;
        }
        i++;
    }
    return true;
}

void check (int *arr , int count)
{
        if (is_pylandrom(arr,count) == true)
        {
            printf ("\n\nYes is Palindrome \n");
            return;
        }
        printf("\nNO is not Palindrome \n");
}

void print_arr (int *arr , int n)
{
    int i = 0;
    while (i < n)
    {
        printf ("%d ",arr[i]);
        i++;
    }
}

int main ()
{
    int count = 5;
    int arr[] = {10,20,30,20,0};
    printf ("Element array : ");
    print_arr(arr,count);
    check(arr,count);
}