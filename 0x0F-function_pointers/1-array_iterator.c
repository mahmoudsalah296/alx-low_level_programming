#include<stdlib.h>
/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array
 * @array: ll
 * @size: the size of the array
 * @action: a pointer to the function you need to use
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
