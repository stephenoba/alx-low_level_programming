#include "main.h"

/**
 * print_alphabet - Uses _putchar to write lowercase alphabets
 */
void print_alphabet(void)
{
	int n = 97;

	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
