#include "main.h"
#include <ctype.h>

/**
 * 1-isdigit.c - checks if a character is a digit or not
 * @c - character parameter
 * Return: Always 0 | 1
 */

int _isdigit(char c)
{
if (isdigit(c)) {
	return (1);
} 
else 
{
	return (0);
}	
}
