/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to number
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int count = sizeof(n) * 8;
	unsigned long int bitMask = 1;

	if (index >= count)
		return (-1);
	bitMask <<= index;
	bitMask = ~(bitMask);
	*n = *n & bitMask;
	return (1);
}
