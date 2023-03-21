#include <stdio.h>
/**
  * jack_bauer - print hour by minutes
  */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int m = 0;

	while (i <= 2)
	{
		_putchar(i + '0');
		while (j <= 3)
		{
			_putchar(j + '0');
			_putchar(':');
			while (k <= 5)
			{
				_putchar(k + '0');
				while (m <= 9)
				{
					_putchar(m + '0');
					_putchar('\n');
					m++
				}
				k++
			}
			j++
		}
		i++
	}
}
