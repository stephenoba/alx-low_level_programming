#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i;
	int j;
	char new_s[];

	new_s = *s;
	i = 0;
	while (s[i])
	{
		i++;
	}

	j = 0;
	while (i--)
	{
		new_s[j] = s[i];
		j++;
	}
}
