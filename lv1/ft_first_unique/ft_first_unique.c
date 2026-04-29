#include <stdio.h>
int check (char *str , char c)
{
    int i = 0;
    int count = 0;
    while (str[i])
    {
        if (c == str[i])
            count++;
        i++;
    }
   // printf ("%d",count);
    return count;
}

char  ft_first_unique(char *str)
{
    int i = 0;
    char c;
    c = '\0';
    while (str[i])
    {
        if (check(str,str[i]) == 1)
            return str[i];  
        i++;
    }
    return c;
}

int main ()
{
    char str[] = "aacbb";
    printf ("%c",ft_first_unique(str));
}