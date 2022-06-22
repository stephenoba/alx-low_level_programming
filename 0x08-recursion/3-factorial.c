#include "main.h"

/**
 * factorial - calculates the factorial of a number
 * @n: number
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 1)
		return (n);
	return n * factorial(n - 1);
}
