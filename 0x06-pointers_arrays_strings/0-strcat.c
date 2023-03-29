#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenate two srtings
 * @dest: string 1
 * @src: string 2
 * Return: the concatenated string
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
