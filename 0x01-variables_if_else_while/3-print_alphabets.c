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

	char s = 'a';
	char e = 'z';
	int count = 0;
	
	for (count = 1; count <= 2; count++)
	{
		if (count == 2)
		{
			s = 'A';
			e = 'Z';
		}
		for (c = s; c <= e; ++c)
			putchar(c);
		putchar('\n');
	}
	return (0);
}

