#include <stdio.h>
#include <stdbool.h>
int check (char c)
{
    if (c == '[' || c == '{' || c == '(')
        return 1;
    return 0;
}

int check_stack (char *stack , char c , int index)
{
        if (stack[index - 1] == '(' && c == ')')
            return 1;
        else if (stack[index - 1] == '[' && c == ']')
            return 1;
        else if (stack[index - 1] == '{' && c == '}')
            return 1;
    return 0;
}
bool isValid (char *str)
{
    int i = 0;
    int k = 0;
    char stack[100];
    while (str[i])
    {
        if (check(str[i]))
            stack[k++] = str[i];
        //  (
        else if (!check(str[i]))
        {
            stack[k] = '\0';
            // ( '\0'
            if (check_stack(stack,str[i] , k))
            {//                     )
                stack[k--] = 0;
            }
            else 
                return false;
        }
        i++;
    }
    return true;
}

// int main ()
// {
//     char str[] = "{}[]()";
//     printf ("%d",isValid(str));
// }