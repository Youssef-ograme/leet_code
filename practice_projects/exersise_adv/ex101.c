#include <stdio.h>
#include <string.h>
void start_programe (char *file , char *type)
{
    FILE *my_file = fopen(file,type);
    if (strcmp(type,"w") == 0)
    {
        fprintf(my_file,"enter 1 to 10 numbers : \n");
        printf ("cat %s",file);
    }

    else if (strcmp(type,"a") == 0)
    {
        int arr[10];
        int i = 0;
        while (i < 10)
        {
            arr[i] = i + 1;
            fprintf(my_file,"%d ",arr[i]);
            i++;
        }
        fprintf(my_file,"\n");
    }

    else if (strcmp(type,"r") == 0)
    {
        printf ("cat %s",file);
    }
    fclose(my_file);
}
int main() {
    char file[10];
    char type[5];
    printf ("enter name in file : ");
    scanf ("%s",file);
    printf ("enter type : ");
    scanf ("%s",type);
    start_programe(file,type);
    return 0;
}
