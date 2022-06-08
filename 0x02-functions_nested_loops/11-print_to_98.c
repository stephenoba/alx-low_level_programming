#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers to 98
 *
 *@n: a given number to start from
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}

	printf("98\n");
}
