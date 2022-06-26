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
	int i;
	int total = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (EXIT_SUCCESS);
	}
	for (i = 1; i < argc; i++)
	{
		if (!_isnumber(argv[i]))
		{
			printf("Error\n");
			return (EXIT_FAILURE);
		}
		total += atoi(argv[i]);
	}
	printf("%d\n", total);
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
