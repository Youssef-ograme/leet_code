// "hello brother" 2
#include <stdio.h>
int check_space (char c)
{
    return (c == ' ' || c == '\t' || c == '\n') ? 1 : 0;
}

int ft_count_words(char *str)
{
    int count = 0 , i = 0 , new = 1;
    while (str[i])
    {
        if (!check_space(str[i]) && new == 1)
        {
            count++;
            new = 0;
        }
        else if (check_space(str[i]))
            new = 1;
        i++;
    }
    return count;
}

int main ()
{

    char str[] = "13 37";
    printf ("%d",ft_count_words(str));
}
