#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: pointer to name
 * @f: callback function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name || f)
		f(name);
	return;
}
