#include <stdio.h>
/**
 * main - entry point
 * Return: 0 if true
 */
int main(void)
{
	char c = 'a';
	char c2 = 'A';

	do {
		putchar(c);
		c++;
	} while (c <= 'z');
	do {
		putchar(c2);
		c2++;
	} while (c2 <= 'Z');
	putchar('\n');
	return (0);
}
