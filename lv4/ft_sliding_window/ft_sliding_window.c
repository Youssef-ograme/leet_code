#include <stdio.h>
#include <stdlib.h>
int  *ft_sliding_window(int *arr, int size, int k)
{
	int len =  (size - k + 1);
	int *res = malloc (len * sizeof(int));
	if (!res || k <= 0 || k > size)
		return NULL;
	int i = 0 , max , c, j , u = 0;
	while (i < len)
	{
		j = i;
		max = arr[i];
		c = 0;
		while (c < k)
		{
			if (arr[j] > max)
				max = arr[j];
			c++;
			j++;
		}
		res[u++] = max;
		i++;
	}
	return res;
}

int main ()
{
	int arr[] = {1,2,3} , size = 3 , k = 1;
	int *res = ft_sliding_window(arr , size , k);
	int total = size - k + 1;
	int i = 0;
	while (i < total)
		printf ("%d",res[i++]);
}
