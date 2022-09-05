#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: sorce
 * @n: number of bytes
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int c;

	c = 0;
	while (dest[c])
		c++;

	i = 0;
	while (src[i])
	{
		if (n == 0)
		{
			break;
		}
		dest[c] = src[i];
		n--;
		c++;
		i++;
	}
	return (dest);
}
