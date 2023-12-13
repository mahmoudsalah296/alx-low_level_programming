#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 *			using the interpolation search
 * @array: a pointer to the first element of the array to search in
 * @size: he number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1 if value doesn't found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	size_t high, low;

	if (array == NULL || size == 0)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		pos = (low + (((double)(high - low) /
					   (array[high] - array[low])) *
					  (value - array[low])));
		if (pos > high || pos < low)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}
