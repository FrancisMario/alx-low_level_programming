#include "main.h"
#include "stdio.h"
/**
 * print_rev - prints a string in reverse
 * @str: parameter
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
}
