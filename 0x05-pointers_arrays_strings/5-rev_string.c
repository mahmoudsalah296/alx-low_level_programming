#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string
 * @s: string to be reversed
*/
void rev_string(char *s)
{
	int i, len, temp;

	i = 0;
	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
