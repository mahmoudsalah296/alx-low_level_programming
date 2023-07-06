/**
 * get_bit - get the value of a bit at a given index.
 * @n: the number
 * @index: the index starting from 0 of the bit you want to get
 * Return: value of a bit at a given index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = sizeof(n) * 8;

	if (index >= count)
		return (-1);

	unsigned long int bitMask = 1 << index;
	int bitValue = (n & bitMask) ? 1 : 0;

	return (bitValue);
}
