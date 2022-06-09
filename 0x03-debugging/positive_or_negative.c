#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* positive - function to check if a number is + or -
*
* Return: Always 0
*/
void positive_or_negative(int i)
{
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}
