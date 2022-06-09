#include "main.h"

/**
 * print_square - prints a square line on the terminal
 *
 * @size: size of square
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	j = size;
	while (size > 0)
	{
		i = j;
		while (i > 0)
		{
			_putchar(35);
			i--;
		}
		_putchar('\n');
		size--;
	}
}
