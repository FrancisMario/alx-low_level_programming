#include <stdio.h>
#include <string.h>

/*
 *This function prints out the following.
 *"Programming is like building a multilingual puzzle"
 */
int main(void) 
{
	char var[64];

	strcpy (var, "\"Programming is like building a multilingual puzzle");
	puts (var);
	return (0);
}
