#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a file with rw------- permissions
 * @filename: name of the file to create
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w_bytes, length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;

		w_bytes = write(fd, text_content, length);
		if (w_bytes == -1 || w_bytes != length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
