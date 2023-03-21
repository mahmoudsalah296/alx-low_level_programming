#include <stdio.h>
/**
  * jack_bauer - print hour by minutes
  */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	while (i <= 23)
	{
		j = 0;

		while (j <= 59)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
