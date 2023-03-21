#include "main.h"

/**
 * _abs- This function prints an absolute value of an integer
 *
 * @b: This is the parameter to be tested
 * Return: always b
**/

int _abs(int b)
{
	if (b < 0)
		b = -(b);
	else if (b >= 0)
		b = b;
	return (b);
}
