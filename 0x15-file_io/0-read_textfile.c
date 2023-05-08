#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - the function that reads string from file
 * @filename: the name of the file
 * @letters: the number of chars
 * Return: written string
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp;
	ssize_t wf;
	ssize_t rp;
	char *str;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	str = malloc(sizeof(char) * letters);
	rp = read(fp, str, letters);
	wf = write(STDOUT_FILENO, str, rp);
	free(str);
	close(fp);
	return (wf);
}
