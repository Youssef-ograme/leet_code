#include <stdio.h>
#include <stdlib.h>
char *encription (char *name , int number)
{
    int i = 0;
    char *encript = malloc (100);
    while (name[i])
    {
        encript[i] = name[i] + number;
        i++;
    }
    return encript;
}

int main ()
{
    char password[100];
    printf("enter password : ") ;
    scanf("%s",password);
    int number = 3;
    printf("%s",encription(password,number));
}