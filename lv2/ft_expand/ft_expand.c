// a3 b322 d5 c1
#include <stdlib.h>
#include <stdio.h>
int is_number (char c)
{
    return (c >= '0' && c <= '9')? 1: 0;
}

int ft_strlen (char *str)
{
    int i = 0;
    while (str[i])    
        i++;
    return i;
}

int len_charcters (char *str)
{
    int i = 0 , count = 0;
    while (str[i])
    {
        if (!is_number(str[i]))
            count++;
        i++;        
    }
    return count;
}

char *ft_strdup (char *str)
{
    char *dest = malloc (ft_strlen(str) + 1);
    int i = 0 , j = 0;
    if (!dest)
        return NULL;    
    while (str[i])
    {
        dest[j++] = str[i];
        i++;
    }
    dest[j] = '\0';
    return dest;
}

char **split_numbers (char *str , int *k)
{
    int size = len_charcters (str);
   // printf ("%d",size);
    char **stack = malloc ((size + 1) * sizeof(char *));
    char *dest = malloc (ft_strlen(str) + 1);
    if (!stack || !dest)
        return NULL;
    int i = 0 , j = 0 ;
    *k = 0;
    while (str[i])
    {
        if (is_number(str[i]))      
            dest[j++] = str[i];    
        else if (j > 0)
        {
            dest[j] = '\0';
            stack[(*k)++] = ft_strdup(dest);
            j = 0;
        }
        i++;
    }
    if (j > 0)
    {
        dest[j] = '\0';
        stack[(*k)++] = ft_strdup(dest);
    }
    stack[*k] = NULL;
    free(dest);
    return stack;
}

int ft_atoi (char *str)
{
    int i = 0 , val , res = 0;
    while (str[i])
    {
        val = str[i] - 48;
        res = (res * 10) + val;
        i++;
    }
    return res;
}

// transform the numbers from characters to intgers
int *transform_the_numbers (char *str , int *j)
{
    int k ;
    char **stack = split_numbers(str , &k);
    int *arr = malloc (k * sizeof (int));
    if (!arr)
        return NULL;
    int i = 0 ;
    *j = 0;
    while (i < k)
    {
       arr[(*j)++] = ft_atoi(stack[i]);
       i++;
    }
    i = 0;
    while (i < k)
        free(stack[i++]);
    free(stack);
    return arr;
}

// som of the numbers
int som_of_numbers (char *str)
{
    int size;
    int *arr = transform_the_numbers(str,&size);
    int i = 0 , res = 0;
    while (i < size)
    {
        res = res + arr[i];
        i++;
    }
    free(arr);
    return res;
}
//----- a3b322d5c1 face the characters

char *transform_the_characters (char *str)
{
    int size = len_charcters (str);
    char *src = malloc (size + 1);
    if (!src)
        return NULL; 
    int i = 0 , j = 0;
    while (str[i])
    {
        if (!is_number(str[i]))
            src[j++] = str[i];
        i++;        
    }
    src[j] = '\0';
    return src;
}

char  *ft_expand(char *str)
{
    int len = som_of_numbers(str);
    char *res = malloc (len + 1);
    if (!res)
        return NULL; 
    int size;
    int *arr = transform_the_numbers(str,&size);
    char *src = transform_the_characters(str);
    int i = 0 , j , k = 0;
    while (i < size)
    {
        j = 0;
        while (j < arr[i])
        {
           res[k++] = src[i];
           j++;
        }
        i++;
    }
    res[k] = '\0';
    free(arr);
    free(src);
    return res;
}

int main ()
{
    char str[] = "a1312b1c1";
    printf ("%s",ft_expand(str));
}
