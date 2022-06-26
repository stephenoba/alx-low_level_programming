#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments
 * Return: integer success(0) failure(!0)
 */
int main(int argc, char *argv[])
{
	int cents, n = 0;

	if (argc != 2 || !_isnumber(argv[1]))
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("0\n");
		return (EXIT_SUCCESS);
	}
	printf("%d\n", n_change(cents, n));
	return (EXIT_SUCCESS);
}

/**
 * n_change - prints the number of change to be made from cents
 * @cents: cents
 * @n: number of denuminations found
 * Return: success (0) or failure(1)
 */
int n_change(int cents, int n)
{
	int i, d;
	int denums[] = {25, 10, 5, 2, 1};

	if (cents <= 0)
		return (n);

	for (i = 0; i < 5; i++)
	{
		if (cents >= denums[i])
		{
			n += 1;
			d = denums[i];
			break;
		}
	}
	return (n_change(cents - d, n));
}

/**
 * _isnumber - checks if a string is a number
 * @s: string
 * Return: 1 if string is a number else 0
 */
int _isnumber(char s[])
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (!isdigit(s[i]))
		{
			if (i == 0 && s[i] == 45)
			{
				i++;
				continue;
			}
			return (0);
		}
		i++;
	}
	return (1);
}
