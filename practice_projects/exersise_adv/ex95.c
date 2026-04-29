#include <stdio.h>
int main ()
{
    void *ptr ;
    float x = 4.44;
    ptr = &x;
    printf ("%f",*(int)(float*)ptr);
}