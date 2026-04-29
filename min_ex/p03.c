#include <stdio.h>
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i = 0;
    while (dest[i])
    {
        i++;
    }

    int j = 0;
    while (j < nb && src[j])
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}

#include <string.h>
int main ()
{
    char dest[30] = "hello ";
    char src[] = "w";
    printf ("%s",strstr(dest, src));
}