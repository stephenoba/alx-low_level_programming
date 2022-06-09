#include "main.h"

/**
 * print_line - prints a line on the terminal
 * @n: nuber of times to print the uderscore character
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
