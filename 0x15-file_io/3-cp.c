#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_string_buffer - the function that creates buffer
 * @f: paramater passed to fun.
 * Return: the buffer
 */
char create_string_buffer(char *f)
{
	char *str_buffer;

	str_buffer = malloc(sizeof(char) * 1024);
	if (str_buffer == NULL)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		exit(99);
	return (str_buffer);
}
/**
 * file_close - the function that closes file
 * @fd: the parameter passed to fun.
 */
void file_close(int fd)
{
	int a;

	a = close(fd);
	if (a == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", fd);
		exit(100);
}
/**
 * main - where the execution of the program starts
 * @argc: the no. of arguments
 * @argv: the arguments passed
 * Return: 0 for success
 */
int main(argc, *argv[])
{
	int source;
	int dest;
	int ro;
	int wo;
	char *str_buffer;

	if (argc != 3)
		dprintf(STDERR_FILENO,  "Usage: cp file_from file_to\n");
		exit(97);
	str_buffer = create_string_buffer(argv[2]);
	source = open(argv[1], O_RDONLY);
	ro = read(source, str_buffer, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (source == -1 || ro == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(str_buffer);
			exit(98);
		wo = write(dest, str_buffer, ro);
		if (des == -1 || wo == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to  %s\n", argv[2]);
			free(str_buffer);
			exit(99);
		ro = read(source, str_buffer, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);
	} while (ro > 0);
	free(str_buffer);
	file_close(source);
	file_close(dest);
}


