#include <stdio.h>
int ft_strlen (char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

void self_Desxcribing (char *arr ,char *str,int pos,int som , int size)
{
    if (pos == size)
    {
        if (som == size)
        {
            arr[size] = '\0';
            printf ("%s\n",arr);
        }
        return;
    }

    if (som > size)
        return;

    int i = 0;
    int val;
    while (str[i])
    {
        arr[pos] = str[i];
        val =  (str[i] - '0');
        self_Desxcribing(arr,str,pos+1,som + val,size);
        i++;
    }
}

int main (int argc , char *argv[])
{
    if (argc == 2)
    {
        int size = ft_strlen (argv[1]);
        char arr[size + 1];
        self_Desxcribing(arr,argv[1],0,0,size);
    }
    printf ("\n");
}