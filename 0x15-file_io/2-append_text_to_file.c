#include "main.h"

/**
 * append_text_to_file - a fct that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the text to add
 *
 * Return: 1 on succes and -1 if fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t count;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i])
		i++;
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	count = write(fd, text_content, i);
	if (count == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
