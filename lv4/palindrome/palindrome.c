#include <stdio.h>
void rm_spaces (char *str)
{
    char *read = str;
    char *write = str;
    while (*read)
    {
        if (*read != ' ')
           	*write++ = *read;
        read++;
    }
    *write = '\0';
}

int ft_strlen (char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}
int check_revers (char *str)
{
	rm_spaces(str);
    char *end = str;
    char *start = str;
    while (*end)
	    end++;
    end--;
    while(start < end)
    {
		if (*start != *end)
			return 0;
		end--;
		start++;
    }
	return 1;
}

int is_palindrom (char *str)
{
	int i = 0;
	char c ;
	if (check_revers(str))
		return 1;
	else
	{
		while (*str)
		{
			c = *str;
			*str = ' ';
			if (check_revers(str) && ft_strlen(str) != 1)
				return 1;
			else{
				*str = c;
				if (check_revers(str) && ft_strlen (str) != 1)
					return 1;
			}
			str++;
		}
	}
	return 0;
}
int main ()
{
	char str[] = "";
	printf ("%d",is_palindrom (str));
}

