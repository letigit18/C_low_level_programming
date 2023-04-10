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

	p = (char *) malloc(size * sizeof(c));
	if (p == 0)
	{
		return (NULL);
	}
	return (p);
}
