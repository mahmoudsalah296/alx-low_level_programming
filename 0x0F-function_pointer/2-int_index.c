/**
 * int_index -  searches for an integer
 * @array: array of integers to be searched
 * @size: number of elements in array
 * @cmp: pointer to the function to be used to compare values
 * Return: the index of the first element for which the cmp function
 * does not return 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
