#include "main.h"
/**
 * _isupper - checks if a character is upper or lower case
 * @c: prints int
 * Return: 0 if lowercase 1 if uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
