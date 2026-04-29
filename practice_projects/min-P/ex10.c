#include "heder.h"

typedef enum 
{
    SamallLetter = 1 , CapitalLetter = 2 , SpecialCharacter = 3 , Digit  = 4 
} info ;


int random_info(int from , int to)
{
    int randomin = rand() % (to - from + 1) + from;
    return randomin;
}

char check_info (info information)
{
    if (information == SamallLetter)
    {
        return (char)random_info(97,122);
    }
    else if (information == CapitalLetter)
    {
        return (char)random_info(65,90);
    }
    else if (information == SpecialCharacter)
    {
        return (char)random_info(33,47);
    }
    else if (information == Digit)
    {
        return (char) random_info(48,57);
    }
    else 
    {
        return '?';
    }
}

char *apdate_info (info information, int  input)
{
    char *stack = malloc (input + 1);
    int i = 0;

    while (i < input)
    {
        stack[i] = check_info(information);
        i++;
    }
    stack[input] = '\0';
    return stack;
}
 // 4 info 
char *loop_info (info information , int input)
{
    char *stack = malloc(input * 4);
    int i = 0;
    while (i < 4)
    {
        char *ran = apdate_info(information , input);
        if (ran != NULL)
        {
            strcat(stack,ran);
            free(ran);
        }
        i++;
    }
    return stack;
}

void print_info (info information , int input , int number)
{
        int j = 1;
        while (j <= number)
        {
            char *key = loop_info(information,input);
            if (key != NULL)
            {
                printf ("key [%d] :  %s\n",j,key);
            }
            j++;
        }
}
int main ()
{
    srand(time(NULL));
    int number;
    printf ("enter number : ");
    scanf ("%d",&number);
    print_info(SamallLetter,4,number);
}