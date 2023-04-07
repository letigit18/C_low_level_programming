#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - where the execution of the program begins
 * @argc: the counter parameter
 * @argv: the string pointer
 * Return: (0) for success
 */
int main(int argc, char *argv[])
{
	int num;
	int pos, change, aux;
	int coins[] = {25, 10, 5, 2, 1};

	pos = change = aux = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (coins[pos] != 0)
	{
		if (num >= coins[pos])
		{
			aux = num / coins[pos];
			change = change + aux;
			num -= coins[pos] * aux;
		}
		pos++;
	}
	printf("%d\n", change);
	return (0);
}
