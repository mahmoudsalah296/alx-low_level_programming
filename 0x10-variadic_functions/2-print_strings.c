#include<stdarg.h>
#include<stdio.h>
/**
 * print_strings - prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *s = va_arg(args, char *);

		if (s == NULL)
			printf("(nil)");
		else
		{
			printf("%s", s);
			if (separator != NULL && i != n - 1)
				printf("%s", separator);
		}
	}
	va_end(args);
	putchar('\n');
}
