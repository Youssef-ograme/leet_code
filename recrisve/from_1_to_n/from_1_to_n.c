#include <stdio.h>
#include <stdlib.h>
int *from_1_to_n(int *stack ,int from , int to , int i)
{
    //int *arr = malloc (to * sizeof (int));
    if (from > to)
    {
        return stack;
    }
    stack[i] = from;
    from_1_to_n(stack,from + 1,to,i + 1);
}

int main ()
{
    int stack[100];
    int from = 3;
    int to = 13;
    int *arr = from_1_to_n(stack,from,to,0);
    int i = 0;
    int size = to - from;
    while(i <= size)
    {
        printf ("%d",arr[i]);
        i++;
    }
}