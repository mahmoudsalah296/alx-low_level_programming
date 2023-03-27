#include <stdio.h>
#include "main.h"
/**
 * puts2 - print a character and skip one
 * @str: str that will be printed
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
		else
			continue;
	}
	putchar('\n');
}
