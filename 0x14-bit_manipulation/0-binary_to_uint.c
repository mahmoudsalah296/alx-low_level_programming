#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointter to a string of zeros and ones
 * Return: the converted number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int number, i;

	if (b == NULL)
		return (0);

	i = number = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		number <<= 1;
		if (b[i] == '1')
			number |= 1;
		i++;
	}
	return (number);
}
