#include <stdio.h>
#include <string.h>
typedef struct 
{
    int age;
    char name[30];
    float salary;
     
}   info ;

void pointers_structs ()
{
    info var ;
    var.age = 22;
    printf ("age : %d ans \n",var.age);
    strcat(var.name,"youssef");
    printf ("my name is : %s \n",var.name);
    var.salary = 33.3;
    printf ("my salary : %.2f\n",var.salary);
    info *ptr;
    ptr = &var;

    ptr->age = 33;
    printf ("age : %d ans \n",ptr->age);
    printf ("my name is : %s \n",ptr->name);
    ptr->salary = 33.3;
    printf ("my salary : %.2f\n",ptr->salary);
}
int main ()
{
    pointers_structs();
}