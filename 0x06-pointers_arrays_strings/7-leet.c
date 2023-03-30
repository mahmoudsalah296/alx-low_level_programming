#include <stdio.h>
#include "main.h"
/**
 * leet - convert leet to 1337
 * @s: character string
 * Return: converted character
 */
char *leet(char *s)
{
	const char original[] = {'A', 'a', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	const char leet[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (int i = 0; s[i]; i++)
	{
		for (int j = 0; j < sizeof(original) / sizeof(original[0]); j++)
		{
			if (s[i] == original[j])
			{
				s[i] = leet[j];
				break;
			}
		}
	}
	return (s);
}
