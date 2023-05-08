#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buff(char *filename);
void close_file(int fd);

/**
 * create_buff - This function allocates 1024 bytes for a buffer
 * @filename: name of the file where buffer is storing chars
 * Return: a pointer to the buffer
**/

char *create_buff(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (!buff)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buff);
}


/**
 * close_file - function that closes the file descriptor
 * @fd: file descriptor to be closed
**/

void close_file(int fd)
{
	int k;

	k = close(fd);

	if (k == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 *  main - function that copies one file to another
 *  @argc: no. of arguements
 *  @argv: an array of pointers to the arguements
 *  Return: always 0 (SUCCESS)
**/

int main(int argc, char *argv[])
{
	int from, to, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buff(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(to, buffer, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (wr > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
