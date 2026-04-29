#include <stdio.h>  
int ft_strlen (char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}
// check characters is good or no ? 
// she has to return 1 
int check (char *s1 , char *s2)
{
    int i = 0 , j, count = 0;
    int size = ft_strlen(s1);
    while (s1[i])
    {
        j = 0;
        while (s2[j])
        {
            if (s1[i] == s2[j])
                count++;
            j++;
        }
        i++;
    }
    return (count == size) ? 1 : 0;
}
// chekc size of this strings 
// she has to return 1 
int check_size_of_s1_and_s2 (char *s1 , char *s2)
{
    int size1 = ft_strlen (s1) , size2 = ft_strlen (s2);
    return (size1 == size2) ? 1 : 0;
}

int  ft_is_anagram(char *s1, char *s2)
{
        return (check(s1,s2) && check_size_of_s1_and_s2(s1,s2)) ? 1 : 0;
}

int main ()
{
    printf  ("%d", ft_is_anagram("abc", "ab") );
}