#include <stdio.h>
/**
 * main - this is main
 * Return: return 1 if true
 */
int main(void)
{
	const char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(2, str, strlen(str));
	return (1);
}
