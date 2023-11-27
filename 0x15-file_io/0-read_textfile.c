#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to POSIX std output
 * @filename: the file name
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print and
 * 0 if the file can not be opened or read
 * 0 if filename is NULL
 * 0 if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_write;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	n_read = read(fd, buffer, letters);
	n_write = write(STDOUT_FILENO, buffer, n_read);

	close(fd);
	free(buffer);

	return (n_write);
}
