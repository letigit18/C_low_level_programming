#include "main.h"

/**
 * _strchr - the function that prints string
 * @s: the first parameter
 * @c: the second parameter
 * Return: returns based on condition
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
