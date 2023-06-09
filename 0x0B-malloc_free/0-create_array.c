#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size size and char c
 * @size: size of an array
 * @c: character to assign
 * Return: pointer to string or Null if fail
**/

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int k;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (k = 0 ; k < size ; k++)
		str[k] = c;
	return (str);
}
