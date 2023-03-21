#include "main.h"
/**
 * _isalpha- This function checks for alphabetic character
 *
 * @c: parameter used in the function
 * Return: 1 if c is an uppercase or lowercase character otherwise 0
**/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
