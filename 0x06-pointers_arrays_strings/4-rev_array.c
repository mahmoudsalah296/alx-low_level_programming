#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverse content of an array
 * @a: array to be reversed
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	j = 0;
	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j++] = tmp;
	}
}
