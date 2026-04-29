#include <stdio.h>
typedef int t_int ;
#define HELLO
#ifdef HELLO
#define SIZE 100
#endif
int main ()
{
    char buffer[SIZE];
    #ifdef HELLO
    printf ("hello");
    #endif

    printf ("sizeof int : %lu \n",sizeof(buffer));
}