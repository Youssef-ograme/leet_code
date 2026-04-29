#include <unistd.h>
void ft_putchar(char c)
{
    write (1,&c,1);
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

void check_and_print (char *str , char *c , char *b)
{
    int size_c = ft_strlen(c);
    int size_b = ft_strlen(b);
    if (size_c == 1 && size_b == 1)
    {
        int i = 0;
        while (str[i])
        {
            if (str[i] == c[0])
            {
                str[i] = b[0];
            }
            ft_putchar(str[i]);
            i++;
        }
        ft_putchar('\n');
    }
    else 
    {
        ft_putchar('\n');
    }
}
int main (int argc , char *argv[])
{
    if (argc > 1 && argc == 4)
    {
        check_and_print(argv[1],argv[2],argv[3]);
    }
    else 
    {
        ft_putchar('\n');
    }

}