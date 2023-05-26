#include "main.h"

/**
 * read_textfile - reads text and prints to the standard output
 * @filename: name of file to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters read, 0 if an error occurs
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, rd, wr;

	buffer = malloc(letters);

	if (!buffer)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	rd = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);
	free(buffer);
	close(fd);
	return (wr);
}
