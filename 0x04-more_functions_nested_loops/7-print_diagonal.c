#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: nuber of times to print the backslach character
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	j = n;
	while (n > 0)
	{
		i = j - n;
		while (i > 0)
		{
			_putchar(32);
			i--;
		}
		_putchar(92);
		_putchar('\n');
		n--;
	}
}
