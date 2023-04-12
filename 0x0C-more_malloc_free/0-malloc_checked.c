#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - the function that checkes the pointer
 * @b: size of the element
 * Return: p if memory is allocated
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	else
	{
		return (p);
	}
}
