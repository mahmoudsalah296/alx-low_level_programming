#include "search_algos.h"

/**
 * binary_search_rec - Searches recursively for a value
 * @array: A pointer to the first element of the subarray to search
 * @low: starting index of the subarray to search
 * @high: ending index of the subarray to search
 * @value:value to search for
 * Return: index of value or -1 if not found
 */
int binary_search_rec(int *array, size_t low, size_t high, int value)
{
	size_t i;
	int mid;

	if (low > high)
		return (-1);
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");
	mid = (int)(low + high) / 2;
	if (array[mid] > value)
		return (binary_search_rec(array, low, mid - 1, value));
	else if (array[mid] < value)
		return (binary_search_rec(array, mid + 1, high, value));
	if (array[mid] == array[mid - 1])
		return (binary_search_rec(array, low, mid, value));
	return (mid);
}
/**
 * advanced_binary - searches for a value in a sorted array of integers
 *			using advanced binary search
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	return (binary_search_rec(array, low, high, value));
}
