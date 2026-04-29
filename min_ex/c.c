#include <stdio.h>
#define max_value(array,length) ({\
    int val = array[0];\
    int i = 1;\
    while (i < length)\
    {\
        if (array[i] > val)\
        {\
            val = array[i];\
        }\
        i++;\
    }\
    val;\
})
int main ()
{
    int array[] = {1,3,4,2,5};
    int length = 5;
    printf ("max value : %d \n",max_value(array,length));
}