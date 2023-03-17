#include <stdio.h>
/**
 * main - entry point
 * Return: 0 if true
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
}
