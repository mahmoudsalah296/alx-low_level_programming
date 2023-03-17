#include <stdio.h>
/**
 * main - entry point
 * Return: 0 if true
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
