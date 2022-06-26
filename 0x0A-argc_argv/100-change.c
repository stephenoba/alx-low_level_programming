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
	int cents, d, n = 0;

	if (argc != 2 || !_isnumber(argv[1]))
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}

	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("0\n");
		return (EXIT_SUCCESS);
	}
	if (cents >= 25)
	{
		n = cents / 25;
		cents = cents % 25;
	}
	while (cents)
	{
		if (cents >= 10)
			d = 10;
		else if (cents >= 5)
			d = 5;
		else if (cents >= 2)
			d = 2;
		else if (cents >= 1)
			d = 1;
		cents -= d;
		n++;
	}
	printf("%d\n", n);
	return (EXIT_SUCCESS);
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
