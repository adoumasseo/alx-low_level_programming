#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a fct that read a text file and prints to stdoutput
 * @filename: a string of the file path
 * @letters: the number of char to read
 *
 * Return: the number of letter read and write
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count;
	void *buff;

	buff = malloc(letters * sizeof(char));
	if (buff == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	count = read(fd, buff, letters);
	if (count == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	count = write(STDOUT_FILENO, buff, count);
	if (count == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	free(buff);
	close(fd);
	return (count);
}
