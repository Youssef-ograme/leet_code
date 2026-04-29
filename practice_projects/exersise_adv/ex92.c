#include <stdio.h>
int main ()
{
    int a = 20;
    int *ptr = &a;
    printf ("%d\n",*ptr);
    printf ("%p\n",ptr); 
    *ptr = 30;
    printf ("%d\n",a);
    printf ("%p\n",ptr);    
    a = 100;
    printf ("%d\n",a);
    printf ("%p\n",ptr);  
}