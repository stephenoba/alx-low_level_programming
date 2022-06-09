#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 */
void print_numbers(void)
{
	int n;

	n = 48;
	while (n <= 57)
	{
		if (n == 50 || n == 52)
		{
			continue;
		}
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
