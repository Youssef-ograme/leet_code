#include <stdio.h>
char *ft_strcpy (char *dest , char *src)
{
    int i = 0;
    int j = 0;
    while (dest[j])
    {
        j++;
    }
    while (src[i])
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    return dest;
}
int main ()
{
    char dest[30];
    char src[] = "hello";
    ft_strcpy(dest,src);
    printf ("%s",dest);
}