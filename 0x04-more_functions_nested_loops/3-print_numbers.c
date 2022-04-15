#include "main.h"
/**
 * print_numbers - prints numbers.
 * Description: prints numbers from 9 - 0
 */
void print_numbers(void)
{
int i;

i = 0;

for (i = 0; i <= 9; i++)
{
	_printchar(i);
}
_printchar('\n');
}
