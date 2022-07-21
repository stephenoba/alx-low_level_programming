#include "main.h"
#include <stdio.h>

/**
 * _binary_len - get the lenght of resulting binary from n
 * @n: number
 * Return: lenght
 */
int _binary_len(unsigned long int n)
{
	int len = 0;

	while (n > 1)
	{
		len++;
		n >>= 1;
	}

	return (len);
}

/**
 * print_binary - prints binary of a given number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int len;
	unsigned long int mask = 1;

	len = _binary_len(n);
	if (len > 0)
		mask <<= len;

	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}
