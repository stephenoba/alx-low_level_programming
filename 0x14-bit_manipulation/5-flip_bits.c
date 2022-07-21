#include "main.h"

/**
 * flip_bits - flip bits.
 * @n: n.
 * @m: m.
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned int n_bits = 0, c1, c2;

	while (!(n == 0 && m == 0))
	{
		c1 = n & 1;
		c2 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (c1 != c2)
			n_bits += 1;
	}
	return (n_bits);
}
