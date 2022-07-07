#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: pointer to name
 * @f: callback function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
}
