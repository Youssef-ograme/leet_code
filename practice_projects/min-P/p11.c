#include <stdio.h>
void read_info(int n ,int l, int *Element)
{
    int i = 0;
    int count = 0;
    printf ("original array : ");
    while (i < n)
    {
        if (Element[i] == l)
        {
            count++;
        }
        printf ("%d ",Element[i]);
        i++;
    }
    printf ("\n%d is repeated %d time (s) \n",l,count);
}

int main ()
{
    int n ;
    printf ("enter number : ");
    scanf ("%d",&n);
    int i = 0;
    int Element[n];
    int l;
    while (i < n)
    {
        printf ("Element [%d]: ",i + 1);
        scanf ("%d",&Element[i]);
        i++;
    }

    printf ("enter the number you want to check : ");
    scanf ("%d",&l);
    read_info(n,l,Element);
}