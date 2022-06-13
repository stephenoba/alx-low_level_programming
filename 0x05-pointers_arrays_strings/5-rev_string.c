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
	int mid;
	char lc; /* holds the left side characters */
	char rc; /* holds the right side characters */

	i = 0;
	while (s[i])
	{
		i++;
	}
	mid = i / 2;
	j = 0;
	while (mid--)
	{
		/* performs a swap of characters on both sides */
		lc = s[j];
		rc = s[i - (j + 1)];
		s[j] = rc;
		s[i - (j + 1)] = lc;
		j++;
	}
}
