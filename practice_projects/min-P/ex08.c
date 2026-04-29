#include "headers.h"


char *EncryptText (char *name , int number)
{
    int i = 0;
    
    while (name[i]);
    {
        name[i] = name[i] + number;
        i++;
    }
    return name;
}

char *Encrypt(char *name ,int number)
{
    int i = 0;
    while (name[i])
    {
        name[i] = name[i] - number;
        i++;
    }
    return name;
}

int main ()
{
    char name[100];
    printf ("enter name : ");
    scanf ("%s",name);
    printf ("%s\n",name);
    EncryptText(name , 3);
    printf ("%s\n",name);
    Encrypt(name,3);
    printf ("%s",name);

}