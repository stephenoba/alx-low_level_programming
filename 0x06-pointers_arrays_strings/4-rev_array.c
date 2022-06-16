#include "main.h"

/**
 * reverse_array - Reverses an array
 * @a: Array
 * @n: number of items in array
 */
void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; i < n; i++)
	{
		n--;
		c = a[i];
		a[i] = a[n];
		a[n] = c;
	}
}
