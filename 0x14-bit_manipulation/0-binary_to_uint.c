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
	unsigned int number = 0;
	unsigned long int n = atoi(b);
	int digit, i = 0;

	if (b == NULL || n < strlen(b))
		return (0);
	while (n != 0)
	{
		digit = n % 10;
		number += digit << i;
		n = n / 10;
		i++;
	}
	return (number);
}
