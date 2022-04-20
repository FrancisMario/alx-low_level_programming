#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * @s: character pointer
 * Description: Returns the length of the char
 * Return: Int
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
