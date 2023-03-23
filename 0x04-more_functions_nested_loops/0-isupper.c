#include "main.h"
/**
 * _isupper- function to print uppercase alphabets
 *
 * @c: parameter to be tested
 * Return: 1 if it is uppercase and 0 if it's lowercase
**/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
