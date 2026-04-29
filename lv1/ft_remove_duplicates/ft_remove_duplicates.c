#include <stdio.h>
#include <stdlib.h>
int ft_strlen (char *str)
{
    int i= 0;
    while (str[i])
        i++;
    return i;
}

int check (char c , char *src)
{
    int i = 0;
    while (src[i])
    {
        if (c == src[i])
            return 0;
        i++;
    }
    return 1;
}

char  *ft_remove_duplicates(char *str)
{
    char *src = malloc (ft_strlen(str));
    if (!src)
        return NULL;
    int i = 0 , j = 0;
    while (str[i])
    {
        if (check(str[i],src))
        {
            src[j++] = str[i];
        }
        i++;
    }
    src[j] = '\0';
    return src;
}

int main ()
{
    char str[] = "abcabc";
    printf ("%s",ft_remove_duplicates(str));
}