#include <stdio.h>
char *ft_strstr (char *str , char *to_finde)
{
    if (to_finde[0] == '\0')
    {
        return str;
    }

    int i = 0;
    int j ;
    while (to_finde[i])
    {
        j = 0;
        while (str[j])
        {
            if (to_finde[i] == str[j])
            {
                return &str[j];
            }
            j++;
        }
        i++;
    }
    return NULL;
}

int main ()
{
    char str[30] = "hello ";
    char to_finde[20] = "e";
    printf ("%s",ft_strstr(str,to_finde));
}