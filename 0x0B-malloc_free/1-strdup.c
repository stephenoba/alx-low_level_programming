#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a duplicate of str
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int size_str, j;

	if (str == NULL)
		return (NULL);

	size_str = 0;
	while (str[size_str] != '\0')
		size_str++;

	dup = (char *)malloc(sizeof(char) * (size_str + 1));

	if (dup == NULL)
		return (NULL);

	for (j = 0; j <= size_str; j++)
		dup[j] = str[j];

	return (dup);
}
