#include <stdio.h>
#include "main.h"

/**
 * _puts - take a string and print it following be new line
 * @str: string to be printed
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
