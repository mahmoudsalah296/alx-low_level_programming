#include <stdio.h>
#include "main.h"
/**
  * print_number - prints a number
  * @n: the number
  */
void print_number(int n)
{
	int digit;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		putchar('0');
	while (n > 0)
	{
		digit = n % 10;
		_putchar(digit + '0');
		n /= 10;
	}
}
