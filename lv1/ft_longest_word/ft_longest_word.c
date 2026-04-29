#include <stdio.h>
#include <stdlib.h>
// hello hh programmer
int check_space (char c)
{
    return (c == ' ' || c == '\t' || c == '\n') ? 1 : 0;
}

int ft_strlen (char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

int len_str (char *str)
{
    int i = 0;
    int new_world = 1 , count = 0;
    while (str[i])
    {
        if (!check_space(str[i]) && new_world == 1)
        {
            count++;
            new_world = 0;
        }
        else if (check_space(str[i]))
            new_world = 1;
        i++;
    }
    return count;
}

int *split_lenght (char *str , int *k)
{
    int len = ft_strlen (str);
    char stack[len];
    int *arr = malloc ((len_str(str)) * sizeof(int));
    if (!arr)
        return NULL;
    int i = 0 , j = 0;
    *k = 0;
    while (str[i])
    {
        if (!check_space(str[i]))
            stack[j++] = str[i];
        else if (j > 0)
        {
            stack[j] = '\0';
            arr[(*k)++] = ft_strlen(stack);
            j = 0;
        }
        i++;
    }
    if (j > 0)
    {
        stack[j] = '\0';
        arr[(*k)++] = ft_strlen(stack);
    }
    return arr;
}
//5 2 10 

int check_max (char *str)
{
    int k;
    int *arr = split_lenght(str , &k);
    int max = arr[0];
    int i = 0;
    while (i < k)
    {
        if (arr[i] > max)
            max = arr[i];
        i++;
    }
    return max;
}

char *ft_strdup (char *str)
{
    char *stack = malloc (ft_strlen(str) + 1);
    if (!stack)
        return NULL;
    int i = 0;
    while (str[i])
    {
        stack[i] = str[i];
        i++;
    }
    stack[i] = '\0';
    return stack;
}

char **split (char *str , int *k)
{
    char **stack = malloc (len_str(str) + 1);
    if (!stack)
        return NULL;
    int size = ft_strlen(str);
    char src[size];
    int i = 0 , j = 0;
    *k = 0;
    while (str[i])
    {
        if (!check_space(str[i]))
            src[j++] = str[i];
        else if (j > 0)
        {
            src[j] = '\0';
            stack[(*k)++] = ft_strdup(src);
            j = 0;
        }
        i++;
    }
    if (j > 0)
    {
        src[j] = '\0';
        stack[(*k)++] = ft_strdup(src);
    }  
    stack[(*k)] = NULL;
    return stack;
}

char  *ft_longest_word(char *str)
{
    int k;
    char **stack = split(str , &k);
    int val = check_max(str);
    int i = 0;
    while (i < k)
    {
        if (val == ft_strlen(stack[i]))
            return stack[i];
        i++;
    }
    return NULL;
}

int main ()
{
    char str[] = "hi ok";
    int k = 0 ;
    printf ("%s",ft_longest_word(str));
    
}