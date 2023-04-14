#include <stdio.h>

/**
  * main - entry point
  * @argc: arg count
  * @argv: poiter to args
  * Return: 0 if success
  */
int main(int argc, __attribute__ ((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
