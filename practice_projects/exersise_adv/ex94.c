#include <stdio.h>
#include <string.h>
typedef struct 
{
    char arr[30];
    int salary ;
} info ;
void exampl ()
{    
    info var;
    strcat(var.arr,"hello ikhan");
    var.salary = 55;
    printf("%d \n",var.salary);
    printf("%s\n",var.arr);
    printf ("\033[33mpointers\033[0m \n");

    info *ptr;
    ptr = &var;

    ptr->salary = 44; 
    printf("%d \n",ptr->salary);
    printf("%s",ptr->arr);
}
int main ()
{
    exampl();
}