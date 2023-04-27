#include<stdio.h>
/**
 * first - prints a string before main
*/
void __attribute__((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
