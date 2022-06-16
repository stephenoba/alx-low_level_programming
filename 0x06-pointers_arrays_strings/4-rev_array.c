#include "main.h"

/**
 * reverse_array - Reverses an array
 * @a: Array
 * @n: number of items in array
 */
void reverse_array(int *a, int n)
{
	int c, i, mid;

	c = 0;
	mid = n / 2;
	while (n >= mid)
	{
		i = a[c];
		a[c] = a[n-1];
		a[n-1] = i;
		n--;
		c++;
	}
}
