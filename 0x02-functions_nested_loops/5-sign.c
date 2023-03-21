#include <stdio.h>
/**
  * print_sign - print the sign of number
  * @n: number to be checked
  * Return: 1 if positive, 0 if zero, -1 if negative
  */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
