#include "main.h"

/**
 * _strncpy - the function that copies strings
 * @dest: the first parameter
 * @src: the second parameter
 * @n: the size of the index
 * Return: returns pointer value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
