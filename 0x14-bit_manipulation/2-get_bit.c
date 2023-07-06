/**
 * get_bit - get the value of a bit at a given index.
 * @n: the number
 * @index: the index starting from 0 of the bit you want to get
 * Return: value of a bit at a given index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int f = 1, res, num;
	unsigned int count = 0;

	num = n;
	while (num > 0)
	{
		count++;
		num >>= 1;
	}
	if (index > count)
		return (-1);
	f <<= index;
	res = n & f;
	if (res > 0)
		return (1);
	else
		return (0);
}
