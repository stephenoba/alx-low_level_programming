#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: string to print
 */
void puts2(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		i++;
	}

	j = 0;
	while (j <= i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
