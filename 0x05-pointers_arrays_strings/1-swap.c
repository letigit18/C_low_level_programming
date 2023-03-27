#include "main.h"

/**
 * swap_int - the function that swaps two numbers
 * @a: the first parameter
 * @b: the second parameter
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
