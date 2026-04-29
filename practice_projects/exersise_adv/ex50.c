#include "headers.h"
int ft_strlen (char *text)
{
    int i = 0;
    while (text[i])
    {
        i++;
    }
    return i;
}

char    *Caesar_cipher_name (char *name , int cipher)
{
    int i = 0;
    while (i < ft_strlen(name))
    {
        name[i] = name[i] + cipher;
        i++;
    }
    return name;
}

char *print_name (char *name , int cipher)
{
    int i = 0;
    while (i < ft_strlen(name))
    {
        name[i] = name[i] - cipher;
        i++;
    }
    return name;
}

int main ()
{
    char name[30];
    printf ("enter name : ");
    scanf ("%s",name);
    printf ("%s \n",name);
    printf ("%s \n",Caesar_cipher_name(name,3));
    printf ("%s \n",print_name(name,3));
}