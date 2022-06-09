#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* positive_or_negative - function to check if a number is + or -
* @i: number to check
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
