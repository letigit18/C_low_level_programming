#include "main.h"

/**
 * _isupper - function that checks uppercase letters
 * @c: the character that is passed to the function
 * Return: 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	
}
