#include <stdio.h>
int short_handl_if (int n)
{
    return (n > 50) ? n : 0;
}
int main ()
{
    printf ("res : %d\n",short_handl_if(4));
}