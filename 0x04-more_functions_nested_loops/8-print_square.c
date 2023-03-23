#include <stdio.h>
#include "main.h"

/**
 * print_square - print square of #
 * @size: size of the square
*/
void print_square(int size)
{
	if (size > 0)
	{
		int i;

		for (i = 1; i <= size; i++)
		{
			int j;

			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
