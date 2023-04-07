#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - where the execution of the program begins
 * @argc: counts the number of arguments passed
 * @argv: the pointer to array
 * Return: 1 if it's error else mul result
 */
int main(int argc, char *argv[])
{
	int mul;
	int n1;
	int n2;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mul = n1 * n2;
	printf("%i\n", mul);
	return (0);
}
