#include <stdio.h>
#include <stdlib.h>

/**
  * malloc_checked - allocate memory
  * @b: number of bytes to be allocated
  * Return: pointer to allocated memory
  */
void *malloc_checked(unsigned int b)
{
	m = malloc(b);

	if (m == NULL)
		exit(98);
	else
		return (m);
}
