#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
int random_numbers(int from , int to)
{
    return rand() % (to - from + 1) + from ;
}

char *read_numbers (int is )
{
    char *arr = malloc (100);
    int i = 0;
    while (i < 4)
    {
        if (is == 1 || is == 0)
        {
            arr[i] = (char)random_numbers(65,90);
        }
        
        i++;
    }
    return arr;
}

char *random_char (int is)
{
    char *stack = malloc (100);
    int i = 0;
    while(i < 4) 
    {
        strcat(stack,read_numbers(is));
        if (i < 3)
        {
            strcat(stack,"-");
        }
        i++;
    }
    return stack;
}

void linking(int is , int n)
{
    char **stack = malloc (100);
    int i = 0;
    while (i < n)
    {
        stack[i] = random_char(is);
        printf ("arr[%d] : %s \n",i + 1,stack[i]);
        i++;
    }
}
int main ()
{
    srand(time(NULL));
    int n = 5;
    int is = 0;
    linking(is,n);
}