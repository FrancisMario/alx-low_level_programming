#include "main.h"
/**
 * _isdigit - checks if a character is upper or lower case
 * @c: parameter
 * Return: 0 if lowercase 1 if uppercase
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
	return (1);
}
else
{
	return (0);
}
}
