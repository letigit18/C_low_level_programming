#include "main.h"
#include <stdlib.h>

/**
 * _strdup - the function that copies string
 * @str: string passed as parameter
 * Return: the pointer to char
 */
char *_strdup(char *str)
{
	char *p;
	int i;
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	p = malloc(sizeof(char) * counter + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < counter; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
