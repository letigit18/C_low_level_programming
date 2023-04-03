#include "main.h"

/**
 * _memset - the function that fills memory with buffer
 * @s: the first argument
 * @b: the second argument
 * @n: the third argument
 * Return: returns s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
