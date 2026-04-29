#include "headers.h"
void pritn_info(int m)
{
    printf(" power of 2 %d ", ft_power(2,m));
}
int main()
{
    int m ;
    read_info(&m);
    pritn_info(m);
}