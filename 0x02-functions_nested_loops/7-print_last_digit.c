#include "main.h"

/**
 * print_last_digit- This is the function that prints the last digit
 *
 * @a: This is the parameter that returns the result
 * Return: always k
**/

int print_last_digit(int a)
{
	int k;

	k = a % 10;
	if (a < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
