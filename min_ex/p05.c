#include <string.h>
#include <stdio.h>
int ft_strlen (char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return i;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int dest_len = ft_strlen(dest);
    int src_len = ft_strlen(src);
    if (size <= dest_len)
    {
        return size + src_len;
    }
    int i = 0;
    int j = dest_len;

    while (src[i] && i < size - 1)
    {
        dest[j] = src[i];
        j++;
        i++;
    }

    dest[dest_len + src_len] = '\0';
    return dest_len + src_len;
}

int main ()
{
    char dest[30] = "hello";
    char src[] = "h";

    printf ("%d\n",ft_strlcat(dest,src,1));
    printf ("%s \n",dest);
}