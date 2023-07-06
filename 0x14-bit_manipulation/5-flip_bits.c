/**
 * flip_bits - get number of bits you would need to flip to get from one
 *		number to another
 * @n: the number to be converted
 * @m: the goal number

*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int flipped;

	flipped = n ^ m;
	while (flipped)
	{
		count++;
		flipped = flipped & (flipped - 1);
	}
	return (count);
}
