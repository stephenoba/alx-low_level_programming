#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_numbers - sums all integers passed to a function
  * @separator: seperator to print between numbers
  * @n: number of arguments
  * Return: sum
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	if (separator != NULL)
	{
		if (n != 0)
		{
			va_start(args, n);

			while (i < n)
			{
				printf("%d", va_arg(args, int));
				if (i != n - 1)
					printf("%s", separator);
				i++;
			}

			va_end(args);
			printf("\n");
		}
	}
}
