#include "main.h"
#include <stdlib.h>
/**
 * create_array - it creates an array of string
 * @size: the first parameter
 * @c: the character passed to function
 * Return: pointer to character
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = (char *)malloc(size * sizeof(c));
	if (p == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
