#include <stdio.h>

void validate_Number(void)
{
    int number;
    int res;
    int check = 0;
    while (check == 0)
    {
        printf("Enter a number: ");
        res = scanf ("%d",&number);
        if (res == 1)
        {
            printf ("\033[35mnumber\033[0m %d",number);
            check = 1 ;
        }
        else if (res == 0)
        {
            printf ("\033[33mharef\033[0m\n");
            printf ("Invalid input try again : \n");
            while (getchar() != '\n');
        }
    }
   
}

int main(void)
{
    validate_Number();
    return 0;
}
