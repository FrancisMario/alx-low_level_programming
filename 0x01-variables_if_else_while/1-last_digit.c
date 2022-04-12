#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - entry point for our program.
 * Description: generates random number and sayes if it's +, -, or 0.
 * Return: 1 if program exited on error, 0 if ended successfully.
 */
int main(void)
{
	int n;
	int last_int;
	char trailing_sentence[254];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_int = n % 10;
	if (last_int > 5)
	{
		strcpy(trailing_sentence, "and is greater than 5");
	} else if (last_int == 0)
	{
		strcpy(trailing_sentence, "and is 0");
	} else if (last_int < 6)
	{
		strcpy(trailing_sentence, "and is less than 6 and not 0");	
	}
	printf("Last digit of %d is %d %s \n", n, last_int, trailing_sentence);
	return (0);
}
