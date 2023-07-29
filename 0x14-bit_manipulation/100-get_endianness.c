#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int m;
	char *c;

	m = 1;
	c = (char *)&m;

	if (*c)
		return (1);
	return (0);
}
