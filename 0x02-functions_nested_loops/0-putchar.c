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
	
	for (i = 0; value[i] != '\0'; ++i)
	{
		_putchar(value[i]);
	}
	_putchar("\n");
	exit(0);
}
