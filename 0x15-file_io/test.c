#include "main.h"

/**
 * read_file - Read a text file and print to standard output
 * @filename: A string of the file path
 * @letters: The number of characters to read
 *
 * Return: The number of letters read and written
 */
ssize_t read_file(const char *filename, size_t letters)
{
    int fd;
    ssize_t count;
    void *buff;

    if (filename == NULL)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buff = malloc(letters);
    if (buff == NULL)
    {
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
