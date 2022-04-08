#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main: entry point for our program.
 * Description: generates an random number is say's if its + or - or 0
 * Returns: int
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
