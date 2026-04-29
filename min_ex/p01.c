#include <stdio.h>
int ft_strcmp(char *s1, char *s2 , int n)
{
    int i = 0;
    int j = 0;
    // ABC
    // ABC
    while( i < n && s1[i] && s2[j])   
    {
        if (s1[i] != s2[j])
        {
            return s1[i] - s2[j];
        }
        i++;
        j++;
    }
    return s1[i] - s2[j];
}

int main ()
{
    char s1[10] = "ABC";
    char s2[10] = "";
    printf ("%d",ft_strcmp(s1,s2,1));
}