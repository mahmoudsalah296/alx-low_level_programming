#include <stdio.h>
#include "main.h"
/**
 * leet - convert leet to 1337
 * @s: character string
 * Return: converted character
 */
char *leet(char *s)
{
	int i = 0;
	char a[] = {'A', 'a', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char b[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (s[i] != '\0')
	{
		int k;

		for (k = 0; k < (sizeof(a) / sizeof(char)); k++)
		{
			if (s[i] == a[k])
				s[i] = b[k];
		}
		i++;
	}
	return (s);
}
