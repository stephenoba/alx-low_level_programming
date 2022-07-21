#include "main.h"

/**
 * binary_to_uint - convert from binary to unsigned int
 * @b: binary in string format
 * Return: unsigned int or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int c, i = 0;

	if (b == NULL)
		return (i);

	c = 0;
	while (b[c] != '\0')
	{
		if (b[c] > 49 || b[c] < 48)
			return (0);
		i = (i * 2) + ((int) b[c] - '0');
		c++;
	}
	return (i);
}
