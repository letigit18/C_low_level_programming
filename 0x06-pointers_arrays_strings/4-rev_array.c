#include "main.h"

/**
 * reverse_array - the function that reverses array members;
 * @a: the first parameter
 * @n: the size of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int r;

	for (i = 0; i < n--; i++)
	{
		r = a[i];
		a[i] = a[n];
		a[n] = r;
	}
}
