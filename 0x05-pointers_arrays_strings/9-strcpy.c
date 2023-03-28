#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @src: source array
 * @dest: destination array
 * Return: the copied string
**/

char *_strcpy(char *dest, char *src)
{
	int k;

	if (dest == NULL)
		return (NULL);
	for (k = 0 ; src[k] != '\0' ; k++)
		dest[k] = src[k];
	return (dest);
}
