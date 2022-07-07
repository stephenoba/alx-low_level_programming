#include "function_pointers.h"

/**
 * array_iterator - maps a function to each item in an array
 * @array: Array
 * @size: size of array
 * @action: function to execute on each item
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !size || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
