#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the name of the file
 * @text_content: content written inside the file
 * Return: 1 on success else -1 if it fails
**/

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	int rw;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (len = 0; text_content[len]; len++)
		;

	rw = write(fd, text_content, len);

	if (rw == -1)
		return (-1);

	return (1);
}
