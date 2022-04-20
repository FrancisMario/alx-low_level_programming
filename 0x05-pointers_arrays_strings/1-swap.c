#include "main.h"
/**
 * swap_int- swaps the value of two given ints
 * @a: mem address of first int 
 * @b: mem address of second int
 */
void swap_int(int *a, int *b)
{
	int temp_a = *a;
	*a = b;
	*b = temp_a;
	
}
