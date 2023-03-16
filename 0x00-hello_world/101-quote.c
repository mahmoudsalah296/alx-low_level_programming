#include <stdio.h>
#include <string.h>
/**
 * main - this is main
 * Return: return 1 if true
 */
int main(void)
{
	const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	fwrite(2, msg, strlen(msg));
	return (1);
}
