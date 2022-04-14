#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}

int _isupper(c)
{
	int lowercase_min = 97;
	int lowercase_max = 122;
	int uppercase_min = 65;
	int uppercase_max = 90;
	bool found = false;

	if((c-lowercase_min) * (c-lowercase_max) <= 0)
	{
		return 0;
	}

	if((c-uppercase_min) * (c-uppercase_max) <= 0)
        {
                return 1;
        }
	
}
