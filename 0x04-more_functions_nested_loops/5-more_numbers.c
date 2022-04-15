#include "main.h"
/**
 * more_numbers - prints numbers.
 * Description: prints numbers from 9 - 0
 */
void more_numbers(void)
{
int i;
int j;

i = 0;

for (i = 0; i <= 10; i++)
{
j = 0;
for (j = 0; j <= 14; j++)
{
_putchar(i + '0');
}
_putchar('\n');
}
_putchar('\n');
}
