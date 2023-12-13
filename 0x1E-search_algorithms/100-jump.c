#include "search_algos.h"
#include <math.h>

/**
 * min - check for smallest number
 * @a: number 1
 * @b: number 2
 * Return: minimum number
 */
size_t min(size_t a, size_t b)
{
	if (b > a)
		return (a);
	else
		return (b);
}

/**
 * jump_search - searches for a value in a sorted array of integers
 *			using the Jump search
 * @array: a pointer to the first element of the array to search in
 * @size: he number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1 if value doesn't found
 */
int jump_search(int *array, size_t size, int value)
{
	int step, low;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	step = 0;
	low = 0;
	while (step < (int)size && array[step] < value)
	{
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		low = step;
		step += (int)sqrt(size);
	}
	printf("Value found between indexes [%d] and [%d]\n", low, step);
	for (i = low; i < min(step + 1, size); i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
