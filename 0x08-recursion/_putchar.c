#include "main.h"
#include <unistd.h>
/**
* _putchar - prints the character c to stdout
* description - this function prints characters while calling initiated
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
* parameter - characters are passed as argument
*/
int _putchar(char c)
{
        return (write(1, &c, 1));
}
