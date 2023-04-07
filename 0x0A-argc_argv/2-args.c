#include "main.h"
#include <stdio.h>

/**
 * main - where the execution of the program begins
 * @argc: counting the number of characters
 * @argv: pointer to an arrays
 * Return: (0) Success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
