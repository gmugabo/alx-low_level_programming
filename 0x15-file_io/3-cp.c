#include "main.h"

/**
 * create_buffer - allocates memory for buffer
 * @file: name of the file to be written to
 *
 * Return: pointer to the allocated memory
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * BUFSIZE);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - closes a file descriptor and exits on failure
 * @fd: file descriptor to be closed
 */

void close_file(int fd)
{
	int cl;

	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

}

/**
 * main - copies contents of one file to another file
 * @argc: the number of arguments supplied tp the program
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int from_fd, to_fd, rd_count, wr_count;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		free(buffer);
		close_file(from_fd);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((rd_count = read(from_fd, buffer, BUFSIZE)) > 0)
	{
		wr_count = write(to_fd, buffer, rd_count);
		if (wr_count != rd_count)
		{
			free(buffer);
			close_file(from_fd);
			close_file(to_fd);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (rd_count == -1)
	{
		free(buffer);
		close_file(from_fd);
		close_file(to_fd);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	free(buffer);
	close_file(from_fd);
	close_file(to_fd);

	return (0);
}
