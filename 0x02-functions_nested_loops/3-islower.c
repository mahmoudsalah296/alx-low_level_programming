#include <stdio.h>
/**
  * _islower - check if character is lower
  * @c: character to be checked
  * Return: 1 if lower 0 otherwise
  */
int _islower(int c)
{
	int val;
	if (c >= 97 && c <= 122)
	{
		val = 1;
	}
	else
	{
		val = 0;
	}
	return val;
}
