#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14
 */
void more_numbers(void)
{
	int i;
	int j;
	int x;
	int y;

	i = 10;
	while (i--)
	{
		x = 48;
		y = 48;
		j = 15;
		while (j--)
		{
			if (y > 48)
				_putchar(y);
			_putchar(x);
			x++;
			if (x > 57)
			{
				y++;
				x = 48;
			}

		}
		_putchar('\n');
	}
}
