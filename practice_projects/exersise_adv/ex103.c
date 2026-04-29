#include <stdio.h>
typedef struct
{
    int id;
    char name[10];
} info;

void rm_students ()
{
    info S;
    FILE * file;
    int delete;
    int is_true = 0;
    file = fopen("students.txt","r");
    FILE * temp;
    temp = fopen ("temp.txt","w");
    printf ("enter ID of student to delete : ");
    scanf ("%d",&delete);
    while (fscanf(file,"%d %s",&S.id,S.name) != EOF)
    {
        if (S.id != delete)
        {
            fprintf(temp,"%d %s \n",S.id,S.name);
        }
        else 
        {
            is_true = 1;
        }
    }
    fclose(file);
    fclose(temp);
    if (is_true == 1)
    {
        remove("students.txt");
        rename("temp.txt","students.txt");
        printf ("gooooood \n");
    }
    else 
    {
        remove ("temp.txt");
        printf ("noooooooooo\n");
    }
}
int main ()
{
    rm_students();
}