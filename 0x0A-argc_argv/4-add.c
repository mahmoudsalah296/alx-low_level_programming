#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - entry point
  * @argc: arg count
  * @argv: poiter to args
  * Return: 0 if success
  */
int main(int argc, char *argv[])
{
	if (argc <= 1)
	{
		printf("0\n");
	}
	else if (argc == 2)
	{
		printf("Error");
	}
	else
	{
		int i;
		int sum;

		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) != 0)
				sum += atoi(argv[i]);
			else
			{
				_putchar('E');
				_putchar('r');
				_putchar('r');
				_putchar('o');
				_putchar('r');
				_putchar('\n');
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
