#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: pointer to String
 */
char *leet(char *s)
{
	int i, j;
	int l[] = {'a', 'e', 'o', 't', 'l'};
	int n[] = {52, 51, 48, 55, 49};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 5; j++)
		{
			if (s[i] == l[j] || s[i] == l[j] - 32)
				s[i] = n[j];
		}
	}
	return (s);
}
