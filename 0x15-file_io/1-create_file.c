#include "main.h"

/**
 * create_file - a fct that create a file
 * @filename: the name and path of the file to create
 * @text_content: the content of the file
 *
 * Return: 1 on succes, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t count;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i])
		i++;
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
		return (-1);
	count = write(fd, text_content, i);
	if (count == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
