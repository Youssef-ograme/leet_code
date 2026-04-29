#include <stdio.h>
#include <stdlib.h>
int len_arguements (char *str)
{
    int i = 0 , new = 1 , count = 0;
    while (str[i])
    {
        if ((str[i] != ' ' || str[i] != '\t' )&& new == 1)
        {
            count++;
            new = 0;
        }
        else if (str[i] == ' ' || str[i] == '\t')
            new = 1;
        i++;
    }
    return count;
}

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

char *ft_strdup(char *str)
{
    char *dest = malloc (ft_strlen(str) + 1);
    if (!dest)
	    return NULL;
    int i = 0, j = 0;
    while (str[i])
        dest[j++] = str[i++];
    dest[j] = '\0';
    return dest;
}

char  **ft_split_words(char *str , int *k , int *i)
{
    int j = 0;

    *k = 0 , *i = 0;;
    char **stack = malloc ((len_arguements(str) + 1) * sizeof (char *));
    char *dest = malloc (ft_strlen(str));
    if (!stack || !dest)
        return NULL;
    while (str[*i])
    {
                dest[j++] = str[*i];
        else if (j > 0)
        {
            dest[j] = '\0';
            stack[(*k)++] = ft_strdup(dest);
            j = 0;
        }
        (*i)++;
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

char *reverse_words (char *str)
{
	int len , i , j = 0 , size ,nbr;
	char **stack = ft_split_words(str , &len,&size);
	char *res = malloc (size + 1);
	if (!res)
		return NULL;
	len -= 1;
	while (len >= 0)
	{
		i = 0;
		while (stack[len][i])
			res[j++] = stack[len][i++];
		if (len != 0)
			res[j++] = ' ';
		len--;
	}
	res[j] = '\0';
	free(stack);
	return res;
}

int main ()
{
	char str[] ="   spaces  here     ";
	char *res = reverse_words(str);
	printf ("%s\n",res);
	free(res);
}
