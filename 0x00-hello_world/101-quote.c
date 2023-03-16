#include <stdio.h>
#include <string.h>
/**
 * main - this is main
 * Return: return 1 if true
 */
int main(void)
{
	const char *msg = "and that piece of art is useful\"- Dora Korpar, 201"
		"5-10-19\n";

	fwrite(msg, sizeof(char), strlen(msg), stderr);
	return (1);
}
