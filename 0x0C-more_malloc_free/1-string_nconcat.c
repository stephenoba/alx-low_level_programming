#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings to n values of the second
 * @s1: First string
 * @s2: second string
 * Return: pointer to s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, nn, len_s1, len_s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
		i++;
	len_s1 = i;

	i = 0;
	while (s2[i] != '\0')
		i++;
	len_s2 = i;

	if (n > len_s2)
		n = len_s2;

	nn = len_s1 + n;

	p = malloc(nn + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < nn; i++)
		if (i < len_s1)
			p[i] = s1[i];
		else
			p[i] = s2[i - len_s1];

	p[i] = '\0';
	
	return (p);
}
