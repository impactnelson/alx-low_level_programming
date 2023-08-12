/**
 * flip_bits - This is going to count the amount of bits to alter or flip.
 * @n: This will the  first number.
 * @m: This will be the second number.
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int l;
	int counter = 0;
	unsigned long int _cur;
	unsigned long int ex = n ^ m;

	for (l = 63; l >= 0; l--)
	{
		_cur = ex >> l;
		if (_cur & 1)
			counter++;
	}

	return (counter);
}

