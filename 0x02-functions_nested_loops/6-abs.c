#include <stdio.h>
/**
  * _abs - print abs value
  * @i: number to be absoluted
  * Return: value absoluted
  */
int _abs(int i)
{
	if (i < 0)
		return (i + i * 2);
	else
		return (i);
}
