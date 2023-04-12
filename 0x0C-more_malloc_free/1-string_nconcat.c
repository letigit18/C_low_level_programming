#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - the function that concatenats string
 * @s1: the first parametr
 * @s2: the second parametr
 * @n: the number of characters to be concatenated
 * Return: concatenate pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i;
	unsigned int j;
	unsigned int fc;
	unsigned int sc;

	i = j = fc = sc = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n < j)
	{
	p = malloc(sizeof(char) * (i + n + 1));
	}
	else
	{
	p = malloc(sizeof(char) * (i + j + 1));
	}
	if (p == NULL)
	{
		return (NULL);
	}
	while (fc < i)
	{
		p[fc] = s1[fc];
		fc++;
	}
	while (n < j && fc < (i + n))
	{
		p[fc++] = s2[sc++];
	}
	while (n >= j && fc < (i + j))
	{
		p[fc++] = s2[sc++];
	}
	p[fc] = '\0';
	return (p);
}
