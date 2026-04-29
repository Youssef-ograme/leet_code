#include <stdio.h>
int hh_add (int a , int b)
{
    int res ;
    res = a + b;
    return res;
}

void print_add (int a , int b)
{
    int res = hh_add (a , b);
    printf ("res : %d",res);

}

int main ()
{
    int a, b;
    a = 4 ;
    b = 5;
    print_add(a,b);
}