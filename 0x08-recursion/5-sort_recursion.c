#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_(n, 1));
}

/**
 * sqrt_ - recursion
 * @n: int
 * @i: int
 * Return: square root
 */
int sqrt_(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
