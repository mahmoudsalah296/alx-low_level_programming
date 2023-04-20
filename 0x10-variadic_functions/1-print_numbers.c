#include<stdarg.h>
#include<stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: the string to be printed between numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator == NULL || i == n - 1)
			continue;
		else
			printf("%s", separator);
	}

	va_end(args);
	putchar('\n');
}
