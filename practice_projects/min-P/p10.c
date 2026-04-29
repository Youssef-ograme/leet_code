#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
typedef enum 
{
    lowercase_letters = 1 , capital_letters = 2, symbol = 3 , degits = 4
}   info ;

int random_number (int from , int to)
{
    return rand() % (to - from + 1) + from;
}

int random_info (info information)
{
    if (information == lowercase_letters)
    {
        return (char)random_number(97,122);
    }
    else if (information == capital_letters)
    {
        return (char)random_number(65,90);
    }
    else if (information == symbol)
    {
        return (char)random_number(33,47);
    }
    else if (information == degits)
    {
        return (char)random_number(48,57);
    }
    else 
    {
        printf ("?\n");
    }
}

// AJSD
char *print_4info (info  information)
{
    char *arr = malloc (100);
    int i = 0;
    while (i < 4)
    {
        arr[i] = random_info(information);
        i++;
    }
    return arr;
}

// ADSW-WESS-EESA-WEDS
char *print_4sentence (info information)
{
    char *text = malloc (100);
    int i = 0;
    while (i < 4)
    {
        strcat(text,print_4info(information));
        if (i < 3)
        {
            strcat(text,"-");
        }
        i++;
    }
    return text;
}

// ADSW-WESS-EESA-WEDS
// ADSW-WESS-EESA-WEDS
// ADSW-WESS-EESA-WEDS
// ADSW-WESS-EESA-WEDS
void print_info (info information , int n)
{
    int i = 0;
    while (i < n)
    {
            printf ("key [%d] : %s\n",i + 1,print_4sentence(capital_letters));
            i++;
    }
}

int main ()
{
    srand(time(0));
    print_info(capital_letters,100);
}