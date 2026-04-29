#include <stdio.h>
char *check_numbers_is_P_N(int n)
{
    return (n > 0) ? "positive" :
           (n < 0) ? "negative" : "zero";
}
int main ()
{
    printf ("%s",check_numbers_is_P_N(-30));
}