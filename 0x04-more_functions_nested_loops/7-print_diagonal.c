#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print diagonal of slashes
 * @n: number of slashes to be printed
*/
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			int j;

			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
