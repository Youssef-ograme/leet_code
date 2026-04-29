#include "headers.h"
typedef enum 
{ 
    SamallLetter = 1,    
    CapitalLetter = 2,   
    SpecialCharacter = 3,
    Digit = 4           
} enCharType;

int random_info (int from , int to)
{
    int ran = rand() % (to - from + 1) + from;
    return ran;
}

char print_random (enCharType info_char)
{
    if (info_char == SamallLetter)
    {
        return (char) random_info(97,122);
    }
    else if (info_char == CapitalLetter)
    {
        return (char) random_info(65,90);
    }
    else if (info_char == SpecialCharacter)
    {
        return (char) random_info(33,47);
    }
    else if (info_char == Digit)
    {
        return (char) random_info(48,57);
    }
    else 
    {
        return '?';
    }
}
int main ()
{
    srand (time(NULL));
    int i = 0;
    while (i < 10)
    {
        printf ("%c\n",print_random(SamallLetter));
        printf ("%c\n",print_random(CapitalLetter));
        printf ("%c\n",print_random(SpecialCharacter));
        printf ("%c\n",print_random(Digit));
        i++;
    }
}