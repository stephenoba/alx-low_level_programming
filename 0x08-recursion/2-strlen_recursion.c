#include "main.h"

/**
 * _strlen_recursion - printd the len of a string
 * @s: string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
