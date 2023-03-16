#include<stdio.h>
/**
 * main - the main function
 * @x: the int var
 */
int main(void)
{
	int x = 10;
	long int lx = 20;
	char c = 'm';
	long long int llx = 100;
	float f = 10.0f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(x));
	printf("Size of a long int: %lu byte(s)\n", sizeof(lx));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(llx));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
