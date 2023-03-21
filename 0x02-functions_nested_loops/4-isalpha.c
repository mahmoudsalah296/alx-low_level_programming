#include <stdio.h>
/**
  * _isalpha - check if input is a letter
  * @c: input to be checked
  * Return: 1 if is letter 0 otherwise
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90 ) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
