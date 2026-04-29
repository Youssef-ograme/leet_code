#include <stdio.h>
int ft_strlen (char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

int transform (char *str)
{
    int i = 0;
    int size = ft_strlen (str);
    int arr[size];
    int j = 0;
    int val ;
    while (str[i])
    {
        val = str[i];
        arr[j++] = val;
        i++;
    }
    i = 0;
    j = 0;
    int res ;
    int som = 0;
    int temp;
    while (i < size - 1)
    {
        temp = arr[i + 1];
        res =  arr[i] - temp;
        if (res < 0)
        {
            res = -res;
        }
        som = som + res;
        i++;
    }
    return som;
}

int main ()
{
    char str[] = "hello";
    printf ("%d",transform(str));
}