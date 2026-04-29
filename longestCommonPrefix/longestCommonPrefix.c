#include <stdio.h>
#include <stdlib.h>
int ft_strlen (char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}
// d
// "dog","der","dar"
int check_wstr (char c,char **wstr , int size , int index)
{
    int i = 0;
    int count = 0;
    int new_char = 1;
    while (i < size)
    {
            if (c == wstr[i][index] && new_char == 1)
            {
                 count++;
                new_char = 0;
            }
        new_char = 1;
        i++;
    }
    return count;
}

char *longestCommonPrefix (char **wstr , int size)
{
    int i = 0 , val , k = 0;
    char *stack = malloc (ft_strlen(wstr[0]) + 1);
    while (wstr[0][i])
    {
           val = check_wstr (wstr[0][i], wstr , size , i);
           if (val == size)
           {
                stack[k++] = wstr[0][i];
           }
           else 
                break;
        i++;
    }
    stack[k] = '\0';
    return stack;
}

// int main ()
// {
//     char *strs[] = {"deg","der","edr"};
//     char *str = longestCommonPrefix(strs,3);
//     printf ("%s",str);
//     free(str);
// }