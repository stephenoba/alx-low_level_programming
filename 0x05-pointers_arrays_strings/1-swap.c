#include "main.h"

/**
 * swap_int - swaps the value of two integers using pointers
 *
 * @a: integer one
 * @b: integer two
 */
void swap_int(int *a, int *b)
{
	int v = *a;

	*a = *b;
	*b = v;
}
