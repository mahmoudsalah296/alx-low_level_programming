#include <stdio.h>
#include "main.h"

/**
 * _isupper - check if character is upper case or not
 * @c: character to be checked
 * Return: 1 if upper 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
