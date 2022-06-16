#include "main.h"
#include <stdio.h>

/**
 * print_number - prints out a number to the terminal
 * @n: Number to be printed
 */
void print_number(int n)
{
	int i;
	int a[100];

	i = 0;
	while(n)
	{
		a[i] = n % 10;
		n /= 10;
	}

	/* j = sizeof(a) / sizeof(a[0]); */
	printf("%d\n", a[0]);
	_putchar(a[0]);
}
