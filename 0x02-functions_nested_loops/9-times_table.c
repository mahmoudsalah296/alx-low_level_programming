#include <stdio.h>
#include "main.h"
/**
  * times_table - print times table from 0 to 9
  */
void times_table(void)
{
	int i = 0;
	int j = 0;
	int result;

	while (i <= 9)
	{
		while (j <= 9)
		{
			result = i * j;

			_putchar(result + '0');
			_putchar(',');
			if (result <= 9)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
