#include <stdio.h>
#include "main.h"

/**
 * _isdigit - check if character is digit or not
 * @c: character to be checked
 * Return: 1 if it is digit 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
