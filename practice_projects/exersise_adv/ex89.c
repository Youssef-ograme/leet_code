 #include <stdio.h>
 void toD_arrays ()
 {
    int arr[10][10];
    int i = 0;
    while (i < 10)
    {
        int j = 0;
        while (j < 10)
        {
            arr[i][j] = (i + 1) * (j + 1);
            j++;
        }
        i++;
    }

    i = 0;
    while (i < 10)
    {
        int j = 0;
        while (j < 10)
        {
            printf ("%0*d ",2,arr[i][j]);
            j++;
        }
        printf ("\n");
        i++;
    }
 }
 int main ()
 {
    toD_arrays();
 }