#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenate two srtings
 * @dest: string 1
 * @src: string 2
 * @n: number of characters that will be concatenated
 * Return: concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (j < n)
	{
		if (src[j] == '\0')
			break;
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
