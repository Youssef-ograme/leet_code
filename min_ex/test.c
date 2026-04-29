// this is test of my code :)

#include <stdio.h>
// hh
// jj
// kk
#include <stdlib.h>
int check_space (char c)
{
    return (c == ' ' || c == '\t');
}

int check_index (char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c - 'a' + 1;
    }
    else if (c >= 'A' &&  c <= 'Z')
    {
        return c - 'A' - 1;
    }
    return 0;
}

int som_index(char *str)
{
    int i = 0;
    int val ;
    int som = 0;
    while (str[i])
    {
        val = check_index (str[i]);
        som = som + val;
        i++;
    }
    return som;
}

int lengthe_argments (char *str)
{
    int i = 0;
    int count = 0;
    int new_world = 1;
    while (str[i])
    {
        if (!check_space (str[i]) && new_world == 1)
        {
            count++;
            new_world = 0;
        }
        else if (check_space (str[i]))
        {
            new_world = 1;
        }
        i++;
    }
    return count;
}

int ft_strlen (char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return i;
}

char *ft_strdup (char *str)
{
    char *dest = malloc (ft_strlen(str) + 1);
    int i = 0;
    while (str[i])
    {
        dest[i] = str[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char **ft_split (char *str , int *count)
{
    int size = lengthe_argments(str);
    char **wstr = malloc ((size + 1) * sizeof (char *));
    char *tab = malloc (ft_strlen (str) + 1);
    int i = 0;
    int j = 0;
    *count = 0;
    if (!wstr || !tab)
    {
        return NULL;
    }

    while (str[i])
    {
        if (!check_space (str[i]))
        {
            tab[j++] = str[i];
        }
        else if (j > 0)
        {
            tab[j] = '\0';
            wstr[(*count)] = ft_strdup(tab);
            (*count)++;
            j = 0;
        }
        i++;
    }
    wstr[(*count)] = NULL;
    free(tab);
    return wstr;
}

char **split_2 (char *str)
{
    int count;
    char **wstr = ft_split(str , &count);
    int i = 0;
    int j;
    while (i < count - 1)
    {
        j = i + 1;
        while (j < count)
        {
            if (som_index(wstr[i]) > som_index(wstr[j]))
            {
                char *temp = wstr[i];
                wstr[i] = wstr[j];
                wstr[j] = temp;
            }
            j++;
        }
        i++;
    }
    return wstr;
}

int main ()
{
    char str[] = "a gk rfd j k rd gdn";
    int count;
    char **wstr = split_2(str);
    int i = 0;
    while (wstr[i])
    {
        printf ("%s ",wstr[i]);
        i++;
    }
}
