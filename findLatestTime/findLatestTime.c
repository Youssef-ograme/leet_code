#include <stdio.h>
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

int check (char c)
{
    if (c >= '2' && c <= '9')
    {
        return 1;
    }
    else if (c == '1' || c == '0')
    {
        return 0;
    }
}
// [11:54]
char *findLatestTime(char *str , int size) {
    if (size != 5)
    {
        return (NULL);
    }
    int i = 0;   
    while (str[i])
    {
        if (str[i] == '1')
        {
            str[i + 1] = '1';
            i += 1;
        }
        else if (str[i] == '0')
        {
            str[i + 1] = '9';
            i += 1;
        }
        else if (str[i] == '?')
        {
            if (str[i] == '?' && str[i + 1] == '?')
            {
                str[i] = '1';
                str[i+1] = '1';
                i += 1;
            }
            else if (check(str[i + 1]))
                str[i] = '0';
            else
                str[i++] = '1';
        }
        if (str[i] == ':')
            break;
        i++;
    }
    int j = i - 1;
    while (str[j])
    {
        if (str[j] == ':')
        {
            if (str[j + 1] == '?')
            {
                str[j + 1] = '5';
                j+=1;
            }
            else if (str[j + 2] == '?')
            {
                str[j + 2] = '9';
            }
        }
        j++;
    }
    return str;
}

int main ()
{
    char str[] = "09:?4";
    int size = ft_strlen (str);
    printf ("%s",findLatestTime(str,size));
}