#include <stdio.h>
// hello 
// olleh
int ft_strlen (char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

void revers (char *str)
{
    int i = 0;
    int size = ft_strlen (str);
    char temp;
    while (i < size / 2)
    {
        temp = str[i];
        str[i] = str[size - i - 1];
        str[size - i - 1] = temp;
        i++;
    }
}

int check (char *str , char *vstr)
{
    int i = 0;
    int count = 0 ;
    while (str[i])
    {
        if (str[i] != vstr[i])
        {
            return 0;
        }
        i++;
    }
    return 1;
}
// race car
void skep_space (char *str)
{
    int i = 0 , j = 0;
    while (str[i])
    {
        if (str[i] == ' ' || str[i] == '\t')
            i++;
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        str[j++] = str[i];
        i++;
    }
    str[j] = '\0';
   //printf ("%s",str);
}
int ft_is_palindrome(char *str)
{
    skep_space(str);
    int size = ft_strlen (str);
    char dest[size];
    int i = 0;
    while (str[i]){
        dest[i] = str[i];
        i++;
    }
    dest[i] = '\0';
    revers(str);
    return (check(str,dest)) ? 1 : 0;
}

int main ()
{
    char str[] = "hello";
    printf ("%d",ft_is_palindrome(str));
    //check_space(str);
}