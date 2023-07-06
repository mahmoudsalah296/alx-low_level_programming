#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - function that converts binary to int
 * @b: pointer to a string of zeros and ones
 * Return: converted number or 0 if b is NULL or there is one or more chars in
 *			the string b that is not 0 or 1
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int len, i = 0;

	if (b == NULL)
		return (0);
	else
	{
		len = strlen(b) - 1;
		while (len >= 0)
		{
			if (b[len] != 48 && b[len] != 49)
				return (0);
			dec += ((b[len] - '0') << i);
			i++;
			len--;
		}
	}
	return (dec);
}
