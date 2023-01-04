#include "search_algos.h"




/**
  * binary_search_recursive - Searches recursively for a value in a sorted
  *
  * @array: A pointer to the first element of the [sub]array to search.
  * @left: The starting index of the [sub]array to search.
  * @right: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: The index where the value is located, or -1
  */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value)
		return (i);
	if (array[i] > value)
		return (binary_search_recursive(array, left, i - 1, value));
	return (binary_search_recursive(array, i + 1, right, value));
}


/**
 * binary_search - Performs a binary search on an array
 *
 * @array: Pointer to the first element in Array
 * @size: size of Array
 * @value: element to search for
 *
 * Return: index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_search_recursive(array, 0, size - 1, value));
}
