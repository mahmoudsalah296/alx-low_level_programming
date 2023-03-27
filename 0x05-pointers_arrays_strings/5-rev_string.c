#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string to be reversed
*/
void rev_string(char *s)
{
	int i, j = sizeof(s);
	char temp;

	for (i = 0; i < sizeof(s) / 2 ; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
	}
}
