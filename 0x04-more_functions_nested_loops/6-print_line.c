#include "main.h"

/**
 * print_line - prints a line on the terminal
 * @n: nuber of times to print the uderscore character
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar(95);
		n--;
	}

	_putchar('\n');
}
