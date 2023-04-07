#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * count_num - counts is the number of digit
 * @s: the string passed from main
 * Return: 0 if its not number else 1
 */
int count_num(char *s)
{
	unsigned int i;

	i = 0;
	while (i < strlen(s))
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
 * main - main function
 * @argc: stings args counter
 * @argv: strings passed from the command line interface
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int sum;
	int j;
	int num;

	sum = 0;
	for (j = 1; j < argc; j++)
	{
		num = atoi(argv[j]);
		if (count_num(argv[j]))
		{
			num = atoi(argv[j]);
			sum = sum + num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
