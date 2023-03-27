#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copy a string into another pointer
 * @dest: where we will copy to
 * @src: where will we copy from
 * Return: copies string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
