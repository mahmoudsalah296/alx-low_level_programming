/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the number.
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int count = sizeof(n) * 8;
	unsigned long int bitMask = 1;

	if (index >= count)
		return (-1);
	bitMask <<= index;
	*n = *n | bitMask;
	return (1);
}
