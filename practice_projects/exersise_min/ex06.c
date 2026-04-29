#include <stdio.h>
void print_matrix (int arr[3][3])
{
    int i = 0;
    while (i < 3)
    {
        int j = 0;
        while (j < 3)
        {
            printf ("%d     ",arr[i][j]);
            j++;
        }
        printf ("\n");
        i++;
    }
}

int main ()
{
    int arr[3][3] = {{1,2,3}
                    ,{4,5,6}
                    ,{7,8,9}};
//    arrays_me(arr);
    print_matrix(arr);
}
