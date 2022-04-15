#include "main.h"
/**
 * print_numbers - prints numbers.
 * Description: prints numbers from 9 - 0
 */
void print_numbers(void)
{
print_lol(9);
}

/**
 * print_lol - recurses printing a numbers
 * @v: pramater
 * Description: recurses printing a number till 0
 */
void print_lol(int v)
{
if (v >= 0)
{
 _printchar(v);
 print_lol(v--);
}
else
{
 _printchar('\n');
}
}
