#include "main.h"

/**
 * _strlen_recursion - Prints the length of the string
 * @s: string
 * Return: always 0
**/

int _strlen_recursion(char *s)
{
	int count;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		count = 1 + _strlen_recursion(s + 1);
	}
	return (count);
}
