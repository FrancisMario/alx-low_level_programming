#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * @a: character pointer
 * Description: Returns the
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}
