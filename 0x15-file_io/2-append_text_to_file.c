#include "main.h"

/**
 * append_text_to_file - the function that appends text
 * @filename: the name of the file
 * @text_content: the content of the file
 * Return: 1 if success or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fo;
	int wo;
	int i;

	i = 0;
	if (filename == NULL)
		return (1);
	if (text_content != NULL)
	{
		while (text_content[i])
		{
			i++;
		}
	}
	fo = open(filename, O_WRONLY | O_APPEND);
	wo = write(fo, text_content, i);
	if (fo == -1 || wo == -1)
		return (-1);
	close(fo);
	return (1);
}
