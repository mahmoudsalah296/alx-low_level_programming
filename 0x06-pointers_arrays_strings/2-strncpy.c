#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copy a string into another pointer
 * @dest: where we will copy to
 * @src: where will we copy from
 * @n: number of characters to be copied
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			while (i < n)
			{
				dest[i] = '\0';
				i++;
			}
		}
	}
	return (dest);
}

