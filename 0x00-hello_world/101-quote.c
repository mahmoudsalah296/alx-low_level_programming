#include <stdio.h>
/**
 * main - entry point
 * Return: return 1 if true
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, msg, sizeof(msg));
	return (0);
}
