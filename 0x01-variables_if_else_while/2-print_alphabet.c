#include <stdio.h>
/**
 * main - entry point
 * Return: 0 if true
 */
int main(void)
{
	char c = 'a';

	do {
		putchar(c);
		c++;
		putchar('\n');
	} while (c <= 'z');
}
