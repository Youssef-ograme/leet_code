#include <stdio.h>
int val_romanToInt (char c)
{
    char rom[] = "IVXLCDM";
    int i = 0;
    while (rom[i])
    {
        if (c == rom[i])
        {
            return i;
        }
        i++;
    }
    return -1;
}

int check_val (char c)
{
    int arr[7] = {1,5,10,50,100,500,1000};
    int i = 0;
    int val = val_romanToInt(c);
    if (val == -1)
        return -1;

    return arr[val];
}

int romanToInt (char *str)
{   
    int i = 0;
    int val ,next_val;
    int res = 0;
    int som = 0;
    while (str[i])
    {
        val = check_val (str[i]);
        next_val = check_val (str[i + 1]);
        if (val >= next_val)
            res = res + val;
        else if (val < next_val)
            res = res - val;
        i++;
    }
    return res;
}

int main ()
{
    char str[] = "III";
    printf ("%d",romanToInt(str));
}