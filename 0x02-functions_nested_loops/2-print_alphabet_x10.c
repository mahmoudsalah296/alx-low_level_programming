#include <stdio.h>
/**
  * print_alphabet_x10 - print alphabet 10 times
  */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		char c = 'a';

		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		i++;
	}
}
