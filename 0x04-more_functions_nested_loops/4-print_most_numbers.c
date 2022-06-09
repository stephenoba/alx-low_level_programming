#include "main.h"

/**
 * print_most_numbers - prints most numbers 0 to 9
 */
void print_most_numbers(void)
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
