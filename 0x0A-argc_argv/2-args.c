#include <stdio.h>

/**
  * main - entry point
  * @argc: arg count
  * @argv: poiter to args
  * Return: 0 if success
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
