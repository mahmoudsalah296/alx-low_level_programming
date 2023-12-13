#include "search_algos.h"

/**
 * binary_ssearch -  searches for a value in a sorted array of integers
 *			using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @low: lower bound of array
 * @high: upper bound of the array
 * @value: the value to search for
 * Return: the first index where value is located or -1 if value doesn't found
 */
int binary_ssearch(int *array, size_t low, size_t high, int value)
{
	size_t i = 0;
	size_t mid;

	if (array == NULL || high == 0)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		mid = (int)(low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

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
 * exponential_search - searches for a value in a sorted array of integers
 *			using the exponential search
 * @array: a pointer to the first element of the array to search in
 * @size: he number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1 if value doesn't found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	for (i = 1; i < size; i *= 2)
	{
		if (array[i] > value)
			break;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
		   i / 2, min(i, size - 1));
	return (binary_ssearch(array, i / 2, min(i, size - 1), value));
}
