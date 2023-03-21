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
		if (i < 2)
		{
			j = 0;
			while (j <= 9)
			{
				k = 0;
				while (k <= 5)
				{
					m = 0;
					while (m <= 9)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(':');
						putchar(k + '0');
						putchar(m + '0');
						putchar('\n');
						m++;
					}
					k++;
				}
				j++;
			}
		}
		else if (i == 2)
		{
			j = 0;
			while (j <= 3)
			{
				k = 0;
				while (k <= 5)
				{
					m = 0;
					while (m <= 9)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(':');
						putchar(k + '0');
						putchar(m + '0');
						putchar('\n');
						m++;
					}
					k++;
				}
				j++;
			}
		}
		i++;
	}
}
