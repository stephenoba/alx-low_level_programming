#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @index: index
 * @n: number.
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)

{
	int add;

	if (index > 63)
		return (-1);
	add = 1 << index;
	*n = *n & (~add);
	return (1);
}
