#include "main.h"
#include <string.h>

/**
 * print_rev - prints the reverse of a string to terminal
 *
 * @str: string to be reversed
 */
void print_rev(char *str)
{
	int c;

	c = 0;
	while (str[c])
	{
		c++;
	}
	while (c--)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
