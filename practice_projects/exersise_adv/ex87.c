#include <stdio.h>
void recursive (int n , int m)
{
    if (n <= m)
    {
        printf ("%d ",n);
        recursive(n + 1,m);
    }
}
int main ()
{
    recursive(1,10);
}