#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument list
 * Return: 0 (success) -1 (failure)
 */
int main(int argc, char *argv[])
{
	int a1, a2, res;
	char op;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a1 = atoi(argv[1]);
	a2 = atoi(argv[3]);
	op = *argv[2];

	f = get_op_func(argv[2]);

	if (!f)
	{
		printf("Error no f\n");
		exit(99);
	}

	if ((op == '/' || op == '%') && a2 == 0)
	{
		printf("Error 0 divisor\n");
		exit(100);
	}

	res = f(a1, a2);

	printf("%d\n", res);

	return (0);
}
