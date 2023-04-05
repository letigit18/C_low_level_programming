#include "main.h"

int get_length(char *s);
int pal_checker(char *s, int i, int length);
/**
 * is_palindrome - the function that checks if a string is a palindrome
 * @s: the string parameter to be checked
 * Return: 1 if it's palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	else
	{
		return (pal_checker(s, 0, get_length(s)));
	}
}
/**
 * get_length - the function that returns the length of a string
 * @s: the string parameter
 * Return: length of the string
 */
int get_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
	return (1 + get_length(s + 1));
	}
}
/**
 * pal_checker - the functions that computes string
 * @s: the first parameter which is strings
 * @i: the second parameter whith 0 value
 * @length: the length of string
 * Return: the result
 */
int pal_checker(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (pal_checker(s, i + 1, length - 1));
}

