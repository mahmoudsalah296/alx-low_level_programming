#include <stdio.h>
/**
  * jack_bauer - print hour by minutes
  */
void jack_bauer(void)
{
	int i = 00;
	int j = 00;

	while (i <= 23)
	{
		while (j <= 59)
		{
			putchar(i + '0');
			putchar(':');
			putchar(j + '0');
			j++;
			putchar('\n');
		}
		i++;
	}
}
