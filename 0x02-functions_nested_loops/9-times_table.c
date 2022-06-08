#include "holberton.h"

/**
 * times_table - prints the times table
 */

void times_table(void)
{

int i;
int j;
int x;

i = 0;
while (i <= 9)
{
	j = 0;
	while (j <= 9)
	{
		x = i * j;
		if (j == 0)
		{
			_putchar('0' + x);
		}
		else if (x < 10)
		{
			_putchar(' ');
			_putchar('0' + x);
		}
		else
		{
			_putchar('0' + x / 10);
			_putchar('0' + x % 10);
		}

		if (j < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		j++;
	}
	_putchar('\n');
	i++;
}

}
