#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to modify
 */
void puts_half(char *str)
{
	int c;

	c = 0;
	while (str[c])
		c++;
	if (c % 2 == 1)
	{
		c = (c + 1) / 2;
	}
	else
	{
		c = c / 2;
	}
	while (str[c])
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
