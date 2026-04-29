#include <stdio.h>
int ft_longest_unique_substr(char *str)
{
   int start = 0;
   int end = 0  , max  = 0 , i;
   while (str[end])
   {
        i = start;
        while (i < end)
        {
            if (str[i] == str[end])
            {
                start = i + 1;
                break;
            }
            i++;
        }
        if (end - start + 1 > max)
            max = end - start + 1;
        end++;
   }
   return max;
}

int main ()
{
    char str[] = "pwwkew";
    printf ("%d",ft_longest_unique_substr(str));
}