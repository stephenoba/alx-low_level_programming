#include "main.h"

/**
 * get_bit - returns the value of a bit at index
 * @index: is the index, starting from 0 of the bit you want to get
 * @n: bit value in the index.
 * Return: value of bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}
