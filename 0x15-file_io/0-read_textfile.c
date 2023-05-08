#include "main.h"

/**
 * read_textfile - function that reads a textfile
 * @filename: filename
 * @letters: no. of letters that have to be printed
 * Return: the actual number of letters it can read and print
**/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t m;
	ssize_t wr;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));

	if (!buffer)
		return (0);

	m = read(fd, buffer, letters);

	wr = write(STDOUT_FILENO, buffer, m);

	close(fd);
	free(buffer);

	return (wr);
}
