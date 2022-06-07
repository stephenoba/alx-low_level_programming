#include "main.h"

/**
 * print_alphabet_x10 - Uses _putchar to write alphabets 10x
 */
void print_alphabet_x10(void)
{
	int i;
	int n;

	i = 0;
	while (i < 10)
	{
		n = 97;
		while (n <= 122)
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
		i++;
	}
}
