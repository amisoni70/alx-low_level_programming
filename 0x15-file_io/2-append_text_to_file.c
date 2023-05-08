#include "main.h"

/**
 * append_text_to_file - function that appends text to a file
 * @filename: name of the file
 * @text_content: info stored in the file
 * Return: 1 if successful else -1 if it fails
**/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wr;
	int len;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	for (len = 0; text_content[len]; len++)
		;

	fd = open(filename, O_WRONLY | O_APPEND);

	wr = write(fd, text_content, len);

	if (fd == -1 || wr == -1)
		return (-1);
	close(fd);

	return (1);
}
