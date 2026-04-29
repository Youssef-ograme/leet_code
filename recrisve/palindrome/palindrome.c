#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int ft_strlen (char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

char *ft_strdup (char *str)
{
    int i = 0;
    char *dest = malloc (ft_strlen (str) + 1);
    int k = 0;
    if (!dest)
        return NULL;
    while (str[i])
    {
        dest[k++] = str[i];
        i++;
    }
    dest[k] = '\0';
    return dest;
}

int ft_strcmp (char *s1 ,  char *s2)
{
    int i = 0;
    while (s1[i] || s2[i])
    {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return s1[i] - s2[i];
}

void test_recrsive (char *str , int size , int index , int i)
{
    if (size == 0)
        return ;
    
    if (i < size / 2)
    {
        char temp = str[size - 1];
        str[size - 1] = str[index];
        str[index ] = temp;
    }
    test_recrsive(str,size - 1, index + 1, i + 1);
}

bool palindrome (char *str)
{
    char *dest = ft_strdup (str);
    // printf ("%s",dest);
    test_recrsive(str,ft_strlen(str),0,0);
    if (ft_strcmp (dest, str) == 0)
    {
        free(dest);
        return true ;
    }
    else 
    {
        free(dest);
        return false ;
    }
}
int main ()
{
    char str[] = "radar";
    printf ("%d",palindrome(str));
}