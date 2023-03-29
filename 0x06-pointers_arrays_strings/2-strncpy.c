#include "main.h"

/**
 * _strncpy- copies a string
 * @dest: destination array
 * @src: source array
 * @n: number of characters to be copied
 * Return: destination array
**/

char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		i++;
	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
