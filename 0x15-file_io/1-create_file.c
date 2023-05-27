#include "main.h"

/**
 * create_file - creates a file
 * @filename: a pointer to the name of the file
 * @text_content: a pointer to a string
 *
 * Return: --1 if function fails, -1 if not
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, len;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		len = strlen(text_content);
		wr = write(fd, text_content, len);
		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
