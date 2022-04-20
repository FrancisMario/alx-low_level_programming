#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * @a: mem address of first int
 * @b: mem address of second int
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0') 
	{
		counter++;
		s++;
	}
	return counter;
}
