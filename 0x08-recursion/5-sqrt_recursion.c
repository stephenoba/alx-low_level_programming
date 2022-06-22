#include "main.h"

/**
 * sqrt_ - recursion
 * @a: int
 * @b: int
 * Return: square root
 */
int sqrt_(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt_(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: square root
 */
int _sqrt_recursion(int n)
	return (sqrt_(n, 0));
