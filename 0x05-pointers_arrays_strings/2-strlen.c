#include <stdio.h>
#include "main.h"
/**
 * _strlen - calculate the length of a string
 * @s: string we want to calculate its length
 * Return: length of the string
*/
int _strlen(char *s)
{
	int i;
	int len;

	for (i = 0; s[i] != '\0';)
	{
		i++;
	}
	return (i);
}
