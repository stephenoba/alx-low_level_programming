#include <unistd.h>

/**
 * _putchar - writes a character to the terminal
 * @c: The character to be written to the output
 * Return: count
 */
int _putchar(char *c)
{
	return (write(1, c, 1));
}
