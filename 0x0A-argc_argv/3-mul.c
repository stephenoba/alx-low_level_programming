#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments
 * Return: integer success(0) failure(!0)
 */
int main(int argc, char *argv[])
{
	if (argc <= 1 || argc >= 4 || !_isnumber(argv[1]) || !_isnumber(argv[2]))
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
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
		if (s[i] <= 48 || s[i] >= 57)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

