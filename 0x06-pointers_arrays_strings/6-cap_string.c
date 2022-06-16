#include "main.h"

/**
 * cap_string - Capitalizes a string
 * @s: String
 * Return: pointer to String
 */
char *cap_string(char *s)
{
	int i, j;
	int c = 32;
	int sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
	       	'"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - c;
		}

		c = 0;
		for (j = 0; j <= 12; j++)
		{
			if (s[i] == sep[j])
			{
				c = 32;
				break;
			}
		}
	}
	return (s);
}
