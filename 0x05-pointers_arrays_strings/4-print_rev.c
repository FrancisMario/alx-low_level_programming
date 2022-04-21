#include "main.h"
#include "stdio.h"
#include "string.h"
/**
 * print_rev - prints a string in reverse
 * @str: parameter
 */
void print_rev(char *s)
{
	int len = strlen(s);
	
	for (int i = len; i <= 0; i++)
	{
		_putchar(s+i);
	}
}
