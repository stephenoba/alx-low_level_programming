#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j, x;
	int y = 0;

	while (y < 10)
	{
		x = 0;
		while (x < 10)
		{
			j = 0;
			while (j < 10)
			{
				i = 0;
				while (i < 10)
				{
					if (!(y == i && x == j))
					{
						putchar('0' + y);
						putchar('0' + x);
						putchar(' ');
						putchar('0' + j);
						putchar('0' + i);
						if (!(y + x == 18 && i + j == 17 && j == 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
					i++;
				}
				j++;
			}
			x++;
		}
		y++;
	}
	putchar('\n');
	return (0);
}
