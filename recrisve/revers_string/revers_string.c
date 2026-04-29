#include <stdio.h>
int ft_strlen (char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

void revers_string (char *str , int size , int index , int i)
{
    if (size == 0)
        return ;
    
    if (i < size / 2)
    {
        char temp = str[size -1];
        str[size - 1] = str[index];
        str[index] = temp;
    }

    revers_string (str,size - 1,index + 1, i + 1);

}

int main ()
{
    char str[] = "hello";
    revers_string(str,ft_strlen (str),0,0);
    printf("%s",str);
}