#include "function_pointers.h"

/**
 * int_index - searches for the first occurance of an item in array
 * @array: Array
 * @size: size of Array
 * @cmp: comparison function
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
