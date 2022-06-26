#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments
 * Return: integer success(0) failure(!0)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (EXIT_SUCCESS);
}
