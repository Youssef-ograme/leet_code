#include <stdio.h>
// x++ ++x --X
int finalValueAfterOperations(char** operations, int operationsSize) 
{
    int i = 0;
    int count = 0;
    int new_op = 1;
    while (i < operationsSize)
    {
        int j = 0;
        new_op = 1;
        while (operations[i][j])
        {
            if (operations[i][j] == '+' && new_op == 1)
            {
                count++;
                new_op = 0;
            }
            else if (operations[i][j] == '-' &&  new_op == 1)
            {
                count--;
                new_op = 0;
            }
            j++;
        }
        i++;
    }
    return count;
}
int main ()
{
    char *str[] = {"++x","++x","x++"};
    printf ("%d",finalValueAfterOperations(str,3));
}