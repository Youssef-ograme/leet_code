#include <stdio.h>
// aababc --> a3b2c1
#include <stdlib.h>
// size of degits in malloc 
int check_numbers (char *str)
{
    int i = 0;
    int j, new = 1;
    int count = 0 , len = 0;
    while (str[i])
    {
        j = i;
        count = 0;
        while (str[j])
        {
            if (str[i] == str[j] && new == 1)
                count++; // 12
            else if (str[i] != str[j])
                new = 0;
            j++;
        }
        len++;
        i+= count;
        new = 1;
    }
    //printf ("%d",len);
    return len ;
}
/////////////////////////////////////////
int check_char_with_lenght (char *str , char c , int i)
{
    int new = 1 , count = 0;
    while (str[i])
    {
        if (c == str[i] && new == 1)        
            count++;
        else if (c != str[i])
            new = 0;
        i++;
    }
    return count;
}

char  *ft_compress(char *str)
{
    int size = check_numbers(str);
    size *= 2;
    //printf ("%d",size);
    char *stack = malloc (size + 1);
    if (!stack || str[0] == '\0')
        return NULL;
    int val ;
    int i = 0 , k = 0 , l = 0;
    while (str[i])
    {
        val = check_char_with_lenght(str,str[i],l);
        stack[k++] = str[i];
        stack[k++] = (val + 48);
        i += val;
        l += val;
    }
    stack[k] = '\0';
    return stack;
}
int main ()
{
    char str[] = "aaabbc";
    char *src = ft_compress(str);
    printf ("%s",src);;
    free(src);
}
