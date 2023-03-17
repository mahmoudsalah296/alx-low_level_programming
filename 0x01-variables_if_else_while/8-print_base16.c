#include <stdio.h>
/**
 * main - entry point
 * Return: 0 if true
 */
int main(void)
{
	char c = '0';
	char c2 = 'a';

	do {
		putchar(c);
		c++;
	} while (c <= '9');
	do {
		putchar(c2);
		c2++;
	} while (c2 <= 'f');
	putchar('\n');
	return (0);
}
