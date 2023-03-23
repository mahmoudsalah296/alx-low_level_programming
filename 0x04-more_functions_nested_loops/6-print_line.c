#include "main.h"

/**
 * print_line - print _ of given number
 * @n: number of _`
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
