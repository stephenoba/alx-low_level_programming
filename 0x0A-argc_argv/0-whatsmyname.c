#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments
 * Return: integer success(0) failure(!0)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (EXIT_SUCCESS);
}
