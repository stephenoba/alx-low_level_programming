#include "main.h"
#include <stdio.h>

/**
 * print_array - prints cln characters of an array
 * @a: pointer to the array
 * @n: number of characyers to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
