#include "main.h"

/**
 * more_numbers - print from 0 to 14 ten times
*/
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		char j;

		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
