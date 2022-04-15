#include "main.h"
/**
 * mul - multiplies two digits.
 * Description: prints numbers from 9 - 0
 */
void print_numbers(void)
{
printLol(9);
}

void printLol(int v)
{
if (!(v < 0))
{
_printchar(v);
printLol(v--);
}
else
{
 _printchar('\n');
}
}
