#include <stdio.h>
void cal_bay_refrance (int *x)
{
    (*x)++;
}
int main ()
{
    int a = 10;
    cal_bayref(&a);
    printf ("%d",a);
}