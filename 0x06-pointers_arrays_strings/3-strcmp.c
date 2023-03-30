#include "main.h"

/**
 * _strcmp - the function that compares two numbers
 * @s1: the first parameter
 * @s2: the second paremeter
 * Return: compared result
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 > s2)
	{
		return (15);
	}
	else if (s2 > s1)
	{
		return (-15);
	}
	else
	{
		return (0);
	}
}
