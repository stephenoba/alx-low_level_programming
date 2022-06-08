#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @r: number
 *
 * Return: Always 0.
 */
int print_last_digit(int r)
{
	int n;

	n  = r % 10
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar(n + '0');
	return (n);
}
