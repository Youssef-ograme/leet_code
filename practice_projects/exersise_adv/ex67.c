#include "headers.h"
// A
int read_numbers(int from , int to)
{
    return rand() % (to - from + 1) + from ;
}

//LMDE
char *read_arrays ()
{
    char *arr = malloc (100);
    int i = 0;
    while (i < 4)
    {
        arr[i] = read_numbers(65,90);
        i++;
    }
    return arr;
}

// LMDE-KKEK-JEDS-EKSD
char *check_random ()
{
    int i = 0 ;
    char *arr = malloc (100);
    while (i < 4)
    {
        strcat(arr,read_arrays());
        if (i < 3)
        {
            strcat(arr,"-");
        }
        i++;
    }
    return arr;
}
// arr[ASBD-NBDJ-NEKE]
void print_info (int n)
{
    char **arr = malloc (100);
    int i = 0;
    while (i < n)
    {
        arr[i] = check_random();
        printf("array [%d] : %s \n",i + 1,arr[i]);
        i++;
    }
}

int main ()
{
    srand (time(NULL));
    int n;
    printf ("enter number : ");
    scanf ("%d",&n);
   print_info(n);
}