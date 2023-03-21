#include "main.h"

/**
 * _islower - Function to print the lowercase alphabets
 *
 * @c: parameter to be printed
 * Return: 1 if c is lowercase and 0 if c is uppercase
**/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
