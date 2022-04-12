#include <stdlib.h>
#include "_putchar.c"
/**
 * main - entry level for our program
 * Description: Prints the value "_putchar" out to stdout
 * Return: 0 succesfull and 1 failure
 */

int main(void)
{
	char value[] = "_putchar";
	int i = 0;
	char c = 'x';
	for (i = 0; value[i] != '\0'; ++i)
	{
		c = value[i];
		_putchar(c);
	}
	_putchar("\n");
	exit(0);
}
