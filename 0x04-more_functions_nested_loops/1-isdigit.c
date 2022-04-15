#include "main.h"
/**
 * _isdigit - checks if a character is upper or lower case
 * @c - parameter
 * Returns: 0 if lowercase 1 if uppercase
 */

int _isdigit(int c)
{
int digit_min = 97;
int digit_max = 122;
if ((c-digit_min) * (c-digit_max) <= 0)
{
	return (1);
}
return (0);
}
