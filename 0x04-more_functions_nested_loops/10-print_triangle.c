#include <stdio.h>
#include "main.h"
/**
 * print_triangle - prints a triangle of #
 * @size: size of the triangle
*/
void print_triangle(int size)
{
	if (size > 0)
	{
		int i;

		for (i = 0; i <= size - 1; i++)
		{
			int j;

			for (j = 1; j <= size; j++)
			{
				if (j >= size - i)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
