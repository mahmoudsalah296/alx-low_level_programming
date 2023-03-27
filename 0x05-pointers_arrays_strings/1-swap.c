#include <stdio.h>
#include "main.h"
/**
 * swap_int -  take two variables and swap their values
 * @a: pointer to first variable
 * @b: pointer to second variable
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
