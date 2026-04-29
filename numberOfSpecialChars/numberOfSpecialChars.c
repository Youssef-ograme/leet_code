#include <stdlib.h>
#include <stdio.h>
int ft_strlen (char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

int check_arr (char *str , char c)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == c)
        {
            return 1;
        }
        i++;
    }
    return 0;
}
int check_str (char *str , char c)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
}
// aaAbcBC
int numberOfSpecialChars (char *str)
{
    char *arr = malloc (ft_strlen(str) + 1);
    int i = 0,j = 0;
    char len;
    int count = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            len = str[i] - 32;
            if (check_str(str,len) && !check_arr(arr,len))
            {
                arr[j++] = len;
                count++;
            }
        }
        i++;
    }
    return count;
}

int main ()
{
    char str[] = "abc";
    printf ("%d",numberOfSpecialChars(str));
}