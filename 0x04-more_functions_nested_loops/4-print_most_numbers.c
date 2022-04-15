#include "main.h"
/**
 * print_most_numbers - prints numbers.
 * Description: prints numbers from 9 - 0
 */
void print_most_numbers(void)
{
int i;

i = 0;

for (i = 0; i <= 9; i++)
{
if (i == 2 || i == 4)
{
	continue;
}
_putchar(i + '0');
}
_putchar('\n');
}
