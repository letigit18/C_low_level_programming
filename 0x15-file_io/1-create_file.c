#include "main.h"

/**
 * create_file - the function that creates file
 * @filename: the name of the file
 * @text_content: the content of the file
 * Return: 1 if success or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int wo;
	int i;

	i = 0;
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i])
		{
			i++;
		}
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNK, 0600);
	wo = write(fp, text_content, i);
	if (fp == -1 || wo == -1)
		return (-1);
	close(fp);
	return (1);
}
