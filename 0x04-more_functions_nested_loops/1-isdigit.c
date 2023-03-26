#include "main.h"

/**
 * _isdigit - the function that checkes the digit
 * @c: the parameter passed to the fucntion
 * Return: 1 or 0 based on the condition given
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
