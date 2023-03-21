#include <stdio.h>
#include "main.h"
/**
  * print_last_digit - print last digit of number
  * @num: number which will be printed last digit of
  * Return: last digit
  */
int print_last_digit(int num)
{
	int last;

	if (num < 0)
		num = -num;
	last = num % 10;
	if (last < 0)
		last = -last;
	_putchar(last + '0');
	return (last);
}
