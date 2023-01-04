#include "search_algos.h"

/**
 * linear_search - Performs a linear search on an Array
 *
 * @array: Pointer to first item in Array
 * @size: size of Array
 * @value: Value to search for
 *
 * Return: first index where value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		i = 0;
		while (i < size)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
