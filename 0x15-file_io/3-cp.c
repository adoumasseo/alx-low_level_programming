#include "main.h"

/**
 * close_fd - a fct to close a file descriptor
 * @fd: the file descriptor
 *
 * Return: nothing void type fonction
 */

void close_fd(int fd)
{
	int i;

	i = close(fd);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * copy - a fct that copy content from file to an order file
 * @file_from: file to copy
 * @file_to: file to copy content of file_from
 *
 * Return: Number of char print in file_to
 */
ssize_t copy(const char *file_from, const char *file_to)
{
	int fd1, fd2, i = 0;
	char buff[BUFF];
	ssize_t count;

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	count = read(fd1, buff, BUFF);
	if (count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close_fd(fd1);
		exit(98);
	}
	while (buff[i])
		i++;
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}
	count = write(fd2, buff, i);
	if (count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		close(fd2);
		exit(99);
	}
	close_fd(fd1);
	close_fd(fd2);
	return (count);

}
/**
 * main - entry point
 * @argc: number of arg to exe file
 * @argv: arg of exe file
 *
 * Return: number of char write in file_to
 */
int main(int argc, char **argv)
{
	int c;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	c = copy(argv[1], argv[2]);
	return (c);
}
