#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, inits with specific char
 * @size: size of array.
 * @c: char
 * Return: pointer to array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *carr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	carr = malloc(sizeof(char) * size);

	if (carr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		carr[i] = c;

	return (carr);
}
