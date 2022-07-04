#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments
 * Return: 0 (Success) or 98 (Failure)
 */
int main (int argc, char *argv[])
{
	unsigned int val_1, val_2;

	if (argc != 3 || !_isnumber(argv[1]) || !_isnumber(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	val_1 = atoi(argv[1]);
	val_2 = atoi(argv[2]);
	printf("%d\n", val_1 * val_2);
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

