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

char get_random_caracters (info information)
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

char *GenerateWord (info information )
{

    int i = 0;
    char *result = malloc (4 * sizeof (char));
    while (i < 4)  
    {
        result[i] = get_random_caracters(information);
        i++;
    }
    return result;
}

char *check_world (info information)
{
    char *stack = malloc (100);
    int i = 0 ;
    while (i < 4)
    {
        
        strcat(stack,GenerateWord(information));
        if (i != 3)
        {
            strcat(stack,"-");
        }
        i++;
    }
    return stack;
}
void print_worlds (info information , int input)
{
    int i = 0;
    while (i < input)
    {
        printf ("key [%d] : %s \n",i,check_world(information));
        i++;
    }
}
int main ()
{
    srand(time(NULL));
    int input ;
    printf ("enter input : ");
    scanf ("%d",&input);
    print_worlds(SamallLetter,input);
}