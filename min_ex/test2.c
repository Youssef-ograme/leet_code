#include <stdio.h>
#include <stdlib.h>
int check (char c , char *charset)
{
    int i = 0;
    while (charset[i])
    {
        if (c == charset[i])
        {
            return 1;
        }
        i++;
    }
    return 0;
}

int check_arg (char *str , char *charset)
{
    int i = 0;
    int count = 0;
    while (str[i])
    {
       if ((check(str[i],charset) == 0) && (i == 0 || check(str[i - 1] , charset) == 1))
       {
            count++;
       }
       i++;
    }
    return count;
}

int length_of_string (char *str , char *charset)
{
    int i = 0;
    while (str[i] && !check(str[i] , charset))
    {
        i++;
    }
    return i;
}

char *str_cpy (char *src , char *charset)
{
    int size = length_of_string (src,charset);
    char *dest = malloc ((size + 1) * sizeof(char));
    if (!dest)
    {
        return NULL;
    }
    int i = 0;
    while (i < size)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char **ft_split(char *str, char *charset)
{
    int size = check_arg(str,charset);
    char **stack = malloc ((size + 1) * sizeof (char *));
    int i = 0;
    int arge = 0;
    while (str[i])
    {
         while (str[i] && check(str[i],charset))
            i++;
        // i = 6 
        if (str[i] != '\0')
        //     6 
        {
            stack[arge] = str_cpy(&str[i],charset);
            //     1    = brother
            if(stack[arge] == NULL)
            {
                int j = 0;
                while (j < arge)
                {
                    free(stack[j]);
                    j++;
                }
                free(stack);
                return NULL;
            }
        }
        arge++;
        i = i + length_of_string(&str[i],charset);
        //  i = 13 
    }
    stack[arge] == NULL;
    return stack;
}

int main ()
{
    char str[] = ",,,,,,,,h/el,,lo,br,,,o//;ther";
    char charset[] = ",/"; 
    char **res = ft_split(str,charset);
    int i = 0;
    while (res[i])
    {
        printf ("arge [%d] = %s \n",i,res[i]);
        i++;
    }
}
