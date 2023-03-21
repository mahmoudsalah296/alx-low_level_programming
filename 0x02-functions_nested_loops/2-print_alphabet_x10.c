#include <stdio.h>
/**
  * print_alphabet_x10 - print alphabet 10 times
  */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i <= 9)
	{
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
	}
}
