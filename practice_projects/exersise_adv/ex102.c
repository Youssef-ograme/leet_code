#include <stdio.h>
#include <stdlib.h>
int update_info (char *file_name)
{
    FILE *file = fopen(file_name,"r");
    if (file == NULL) {
        printf("Error: Could not open file\n");
        return 1;
    }
    
    FILE *my_file = fopen("text.txt","w");
    if (my_file == NULL)
    {
        printf("Error: Could not open file\n");
        return 1;
    }
    int max_line = 255 ;
    char *line = malloc (max_line * sizeof (char));
    while (fgets(line,255,file) != NULL)
    {
        fprintf(my_file,"%s",line);
    }

    fclose(file);
    fclose(my_file);
    free(line);
}
int main() {
    char file_name[20];
    printf ("enter name file : ");
    scanf ("%s",file_name);
    update_info(file_name);
    return 0;
}
