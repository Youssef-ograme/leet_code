#include <stdio.h>
#include <stdlib.h>
// "hello brother"
// "hello" "brother"
int len_arguments (char *str , int *i)
{
	int new = 1 , count = 0;
	*i = 0;
	while (str[*i])
	{
		if (!(str[*i] == ' ' || str[*i] == '\t' || str[*i] == '\n') && new == 1)
		{
			count++;
			new = 0;
		}
		else if (str[*i] == ' ' || str[*i] == '\t' || str[*i] == '\n')
			new = 1;
		(*i)++;	
	}
	return count;
}

char *ft_strdup (char *str , int size)
{
	char *dest = malloc (size + 1);
	if (!dest)
		return NULL;
	int i = 0 , j = 0;
	while (str[i])
		dest[j++] = str[i++];
	dest[j] = '\0';
	return dest;
}

char  **ft_words(char *str)
{
	int size;
	char **stack = malloc ((len_arguments(str,&size) + 1) * sizeof (char *));
	char *dest = malloc (size);
	if (!stack || !dest)
		return NULL;
	int i = 0 , j = 0 , k = 0;
	while (str[i])
	{
		 if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			dest[j++] = str[i];
		 else if (j > 0)
		 {
			dest[j] = '\0';
		 	stack[k++] = ft_strdup(dest,j);
			j = 0;
		 }
		 i++;
	}
	if (j > 0)
        {
		dest[j] = '\0';
		stack[k++] = ft_strdup(dest,j);
        }
//	printf ("%s",stack[0]);
	free(dest);
	stack[k] = NULL;
	return stack;
}

int main ()
{
	char str[] ="    ";
	char **stack = ft_words(str);
	int i = 0;
	while(stack[i])
		printf ("%s\n",stack[i++]);
}
