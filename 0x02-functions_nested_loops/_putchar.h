#include <unistd.h>

#ifndef PUTCHAR_H_INCLUDED
#define PUTCHAR_H_INCLUDED

void test(void);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
#endif
