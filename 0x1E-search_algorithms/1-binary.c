#include "search_algos.h"

/**
 * binary_search -  searches for a value in a sorted array of integers
 *			using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: he number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1 if value doesn't found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t low = 0, high = size - 1;
	size_t mid;

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
