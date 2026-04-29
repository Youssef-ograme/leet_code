#include <stdio.h>
#define val(n) (n < 0)? -1 : 1 
#define find_max(array,length)  ({  \
    int index_wan = array[0];       \
    int i = 1 ;                     \
    while (i < length)              \
    {                               \
        if (array[i] > index_wan)   \
        {                           \
             index_wan = array[i];  \
        }                           \
        i++;                        \
    }                               \
    index_wan;                      \
})


int main ()
{
    int array[] = {1,2,3,4,5,100,7,8};
    printf ("%d",find_max(array,8));

}