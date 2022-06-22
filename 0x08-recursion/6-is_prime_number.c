#include "main.h"

/**
 * prime_ - checks if a number is prime
 * @a: int
 * @b: int
 * Return: 1 or 0
 */

int prime_(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
		else if (a == b)
	{
		return (1);
	}
	return (prime_(a, b + 1));
}


/**
 * is_prime_number - checks if number is prime
 * @n: int
 *
 * Return: 1 or 0.
 */
int is_prime_number(int n)
{
	return (prime_(n, 2));
}
