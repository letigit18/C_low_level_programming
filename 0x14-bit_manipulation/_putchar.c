#include <unistd.h>
/**
 * _putchar - the function that prints characters
 * @c: the parameter passed to fun
 * Return: 0 for success
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
