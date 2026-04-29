#include <stdio.h>
#include <stdlib.h>
int *array_in_malloc (int n)
{
  int *arr = malloc (n * sizeof (int));
  int i = 0;
  while (i < n)
  {
      arr[i] = i + 1;
      i++;
  }
  return arr;
}

void print_arrays (int n)
{
    int *arr = array_in_malloc(n); 
    int i = 0;
    printf ("array in malloc \n");
    while (i < n)
    {
        printf ("%d ",arr[i]);
        i++;
    }
    int f = -(n + 10);
    int *temp = realloc(arr ,f * sizeof(int));
    arr = temp;
    i = n;
    printf ("array in realloc \n");
    while (i < f)
    {
        arr[i] = i + 1;
        i++;
    }
    i = 0;
    while  (i < f)
    {
        printf ("%d ",arr[i]);
        i++;
    }
    free(arr);
}
int main ()
{
  int n ;
  n = 100;
  print_arrays(n);
}