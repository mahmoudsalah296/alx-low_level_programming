#include<stdarg.h>
/**
 * sum_them_all - sums all its parameters
 * @n: number of parameters
 * Return: the sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);

	sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	return (sum);
	va_end(ap);
}
