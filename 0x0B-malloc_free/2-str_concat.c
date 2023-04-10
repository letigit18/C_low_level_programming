#include "main.h"
#include <stdlib.h>

/**
 * str_concat - the function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: address of concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *conc;

	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	conc = malloc(sizeof(char) * (i + j + 1));
	i = j = 0;
	if (conc == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		conc[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		conc[i] = s2[j];
		i++;
		j++;
	}
	conc[i] = '\0';
	return (conc);
}
