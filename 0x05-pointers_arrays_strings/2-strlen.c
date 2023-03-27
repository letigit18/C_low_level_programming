#include "main.h"

/**
 * _strlen - the function that counts character
 * @s: the parameter passed to the function
 * Return: counter
 */
int _strlen(char *s)
{
	long counter;

	counter = 0;
	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}
